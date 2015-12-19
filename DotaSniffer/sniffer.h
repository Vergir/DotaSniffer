#ifndef sniffer_h
#define sniffer_h

#include <wchar.h>
#include <unistd.h> //change to <io.h> if compiling under Windows
#include <string.h>
#include <stdio.h>
#include "pcapFuncs.h"
#include "utils.h"

//Accept only UDP packets ('udp'), incoming ('dst') on ports 27005-28999 ('portrange 27005-28999')
#define PCAP_DOTA_FILTER_STRING "udp dst portrange 27005-28999"
//Some networking constants
#define PROTOCOL_UDP 17
#define IPV4_HEADER_OFFSET_TO_PROTOCOL 9
#define UDP_HEADER_LENGTH 8

typedef enum {IncludeData, ExcludeData} DataInclusion;
typedef struct DotaPacket{
    time_t timeStamp;
    suseconds_t microSeconds;
    int port;
    int packetLegnth;
    int dataLength;
    u_char * data;
} DotaPacket;

//It sniffs on every device from 'devices' for 'testTime' seconds, and if it catches any Dota packets, it returns appropriate device
char * TryFindDotaSuitableDevice(pcap_if_t * devices, int testTime);
void Callback(u_char * user, const struct pcap_pkthdr * header, const u_char * packet);
void ConfigureSettings();

#endif
