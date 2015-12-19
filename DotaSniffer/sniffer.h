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

#define PROTOCOL_UDP 17
#define IPV4_HEADER_OFFSET_TO_PROTOCOL 9
#define UDP_HEADER_LENGTH 8

#define ASCII_e 101
#define EXIT_KEY ASCII_e

#define INCLUDE_DATA_YES 1
#define INCLUDE_DATA_NO 0

struct DotaPacket {
    time_t timeStamp;
    suseconds_t microSeconds;
    int port;
    int packetLegnth;
    int dataLength;
    u_char * data;
};
typedef struct DotaPacket DotaPacket;

char * TryFindDotaSuitableDevice(pcap_if_t * devices, int testTime);
void Callback(u_char * user, const struct pcap_pkthdr * header, const u_char * packet);

#endif
