#include <wchar.h>
#include <locale.h>
#include <string.h>
#include "pcapFuncs.h"
#include "utils.h"
#include "sniffer.h"

#define ever (;;)

int main(int argc, const char * argv[]) {
    //Commented: Errors go on screen
    //Uncommented: Errors go in log file
    //SetupLogFile(argv[0]);
    
    pcap_if_t * devices = GetDevices();
    char * device;
    
    for ever
        if (device = FindDotaSuitableDevice(devices))
            Sniff(device, PCAP_DOTA_FILTER_STRING, Callback);
        else
            fputs("No suitable devices found. Retrying search...\n", stderr);
    
    return(0);
}
