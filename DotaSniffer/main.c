#include "pcapFuncs.h"
#include "utils.h"
#include "sniffer.h"

extern char exitKey;


void SetExitKey(char key) {
    exitKey = key;
    printf("Press '%c' and hit <Enter> to exit program\n", key);
}

int main(int argc, const char * argv[]) {
    
    SetExitKey('q');
    ConfigureStreams(argv[0], LogToScreen, OutputToFile);
    
    int tryTime = 8; //Lesser starting values won't find anything anyway
    pcap_if_t * devices = GetDevices();
    char * device;
    
    while (exitKey)
        if (device = TryFindDotaSuitableDevice(devices, tryTime)) {
            fprintf(stderr, "Starting sniffing on: %s\n", device);
            Sniff(device, PCAP_DOTA_FILTER_STRING, Callback);
        }
        else
            fprintf(stderr, "No suitable devices found. Retrying Search with extended test time: %d.\n", tryTime *= 2);
    
    return 0;
}
