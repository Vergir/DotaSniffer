#include "pcapFuncs.h"

void SamplePcapHandler(u_char *args, const struct pcap_pkthdr *header,const u_char *packet) {
    printf("Got packet\nLength (full): %d\nLength(current): %d\nCommentary: %s\n\n", header->len, header->caplen, header->comment);
}

pcap_if_t * GetDevices() {
    
    pcap_if_t * devices;
    char errorBuffer[PCAP_ERRBUF_SIZE];
    
    if (pcap_findalldevs(&devices, errorBuffer)) {
        fprintf(stderr, "Couldn't find all devices (error in pcap_findalldevs): %s\n", errorBuffer);
        return NULL;
    }
    
    if (devices == NULL)
        fputs("No devices found\n", stderr);
    
    return devices;
}

int CountDevices(pcap_if_t * devices) {
    int result = 0;
    for (pcap_if_t * d = devices; d; d = d->next, result += 1){}
    return result;
}

pcap_t * OpenDevice(const char * device, int readTimeOut) {
    char errorBuffer[PCAP_ERRBUF_SIZE] = {0};
    
    pcap_t * deviceHandle;
    
    deviceHandle = pcap_open_live(device, BUFSIZ, 1, readTimeOut, errorBuffer);
    
    if (errorBuffer[0])
        fprintf(stderr, "Something is wrong with opening device: %s\n", errorBuffer);
    
    return deviceHandle;
}

int ApplyFilter(const char * device, pcap_t * handle, const char * filterString) {
    int result;
    
    char errorBuffer[PCAP_ERRBUF_SIZE];
    
    struct bpf_program filter;
    bpf_u_int32 net;
    bpf_u_int32 mask;
    
    if (result = pcap_lookupnet(device, &net, &mask, errorBuffer)) {
        fprintf(stderr, "Couldn't get mask of device %s before constructing filter: %s\n", device, errorBuffer);
        return result;
    }
    
    if (result = pcap_compile(handle, &filter, filterString, 1, net)) {
        pcap_perror(handle, "Couldn't compile filter: ");
        return result;
    }
    
    if (result = pcap_setfilter(handle, &filter)) {
        pcap_perror(handle, "Couldn't apply filter: ");
        return result;
    }
    
    return result;
}

int StartLoop(pcap_t * handle, pcap_handler callback) {
    if (pcap_loop(handle, -1, callback, handle)) {
        pcap_perror(handle, "Couldn't start sniffing: %s");
        return 1;
    }
    
    return 0;
}

void CloseSniffer(pcap_t * handle) {
    pcap_close(handle);
}

int Test(const char * device, const char * filterString, double testTime) {
    pcap_t * handle;
    int testStatus;
    struct pcap_pkthdr * testHeader;
    u_char * testPacket;
    time_t testStart;
    
    if (((handle = OpenDevice(device, 20)) == NULL) || (ApplyFilter(device, handle, filterString)))
        return 1;
    
    testStart = time(NULL);
    
    while ((testStatus = pcap_next_ex(handle, &testHeader, &testPacket)) >= 0) {
        if ((testStatus == 0) && (GetTimeSince(testStart, 131.23) > testTime)) {
            pcap_close(handle);
            return 1;
        }
        else if (testStatus == 1) {
            pcap_close(handle);
            return 0;
        }
    }
    return 1;
}

int Sniff(const char * device, const char * filterString, pcap_handler callback) {
    pcap_t * handle;
    
    if (
        ((handle = OpenDevice(device, 20)) == NULL) ||
        (ApplyFilter(device, handle, filterString)) ||
        (StartLoop(handle, callback))
       )
        return 1;
    
    return 0;
    
}

