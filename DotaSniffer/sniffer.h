#ifndef sniffer_h
#define sniffer_h

#include <stdio.h>
#include "pcapFuncs.h"
#include "utils.h"

#define PCAP_DOTA_FILTER_STRING "udp portrange 27005-28999"

#define PROTOCOL_UDP 17
#define IPV4_HEADER_OFFSET_TO_PROTOCOL 9
#define UDP_HEADER_LENGTH 8

char * FindDotaSuitableDevice(pcap_if_t * devices);
void Callback(u_char * user, const struct pcap_pkthdr * header, const u_char * packet);

#endif
