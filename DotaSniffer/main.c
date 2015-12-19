
#include "pcapFuncs.h"
#include "utils.h"
#include "sniffer.h"

#define ever (;;)

int main(int argc, const char * argv[]) {
    //Call with NULL to supress errors
    //Call with argv[0] to write errors to log file
    //Do not call to print errors on screen
    //RedirectErrors(argv[0]);
    
    SetupStdin();
    
    int tryTime = 8;
    pcap_if_t * devices = GetDevices();
    char * device;
    
    for ever
        if (device = TryFindDotaSuitableDevice(devices, tryTime))
            Sniff(device, PCAP_DOTA_FILTER_STRING, Callback);
        else
            fprintf(stderr, "No suitable devices found. Retrying Search with extended test time: %d.\n", tryTime *= 2);
    return(0);
}
