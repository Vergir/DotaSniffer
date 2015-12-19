#include "sniffer.h"

char exitKey;

char * TryFindDotaSuitableDevice(pcap_if_t * devices, int testTime) {
    while (devices)
        if (Test(devices->name, PCAP_DOTA_FILTER_STRING, testTime))
            devices = devices->next;
        else
            break;
    
    if (devices)
        return devices->name;
    
    return NULL;
}

void CheckForUserInput(void * user) {
    pcap_t * pcapHandle;
    char key;
    
    //Assumes stdin is read in non-bloking mode.
    if (read(STDIN_FD, &key, sizeof(key) > 0) && (key == exitKey)) {
        if (user)
            pcapHandle = (pcap_t *)user;
        else {
            fputs("No handle passed to Callback function. Impossible to appropriately exit. \n", stderr);
            exit(1);
        }
        pcap_breakloop(pcapHandle);
        //CloseSniffer(pcapHandle);
        exitKey = 0;
    }
}

DotaPacket ParseDotaPacket(const struct pcap_pkthdr * header, const u_char * packet) {
    DotaPacket dp;
    
    dp.packetLegnth = header->len;
    dp.timeStamp = header->ts.tv_sec;
    dp.microSeconds = header->ts.tv_usec;
    
    //shift pointer until we reach "protocol" field of ipv4 header, then shift it back to start of header
    //protocol is assured to be udp because pcap has appropriate filter on it
    while (*(++packet) != PROTOCOL_UDP);
    packet -= IPV4_HEADER_OFFSET_TO_PROTOCOL;
    
    int ipPacketLength = (packet[2] << 8) + packet[3];
    
    int ipHeaderLength = (*packet & 0x0F) << 2;
    packet += ipHeaderLength;
    
    dp.port = (packet[2] << 8) + packet[3];
    
    packet += UDP_HEADER_LENGTH;
    dp.data = packet;
    
    dp.dataLength = ipPacketLength - ipHeaderLength - UDP_HEADER_LENGTH;
    
    return dp;
}

void WriteDotaPacket(DotaPacket packet, FILE * fd, DataInclusion includeData) {
    char * timeStamp = TimeToString(packet.timeStamp, packet.microSeconds);
    
    fprintf(fd, "\nDotaPacket\n\
            Time: %s\n\
            Packet Length: %d\n\
            DataLength: %d\n\
            Port: %d\n",
            timeStamp, packet.packetLegnth, packet.dataLength, packet.port);
    
    if (includeData == IncludeData) {
        fputs(" Data Start\n", fd);
        for (int i = 0; i < packet.dataLength; i += 1)
            fputwc(packet.data[i], fd);
        fputs("\n\r Data End\n", fd);
    }
}

void Callback(u_char * user, const struct pcap_pkthdr * header, const u_char * packet) {
    CheckForUserInput(user);
    
    DotaPacket dp = ParseDotaPacket(header, packet);
    
    WriteDotaPacket(dp, stdout, IncludeData);
}