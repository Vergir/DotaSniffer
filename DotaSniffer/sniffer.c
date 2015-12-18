#include "sniffer.h"

char * FindDotaSuitableDevice(pcap_if_t * devices) {
    while (devices)
        if (Test(devices->name, PCAP_DOTA_FILTER_STRING, 10.0))
            devices = devices->next;
        else
            break;
    if (devices)
        return devices->name;
    return NULL;
}

void Callback(u_char * user, const struct pcap_pkthdr * header, const u_char * packet) {
    
    //shift pointer until we reach "protocol" field of ipv4 header, then shift it back to start of header
    //protocol is assured to be udp because pcap has appropriate filter on it
    while (*(++packet) != PROTOCOL_UDP);
    packet -= IPV4_HEADER_OFFSET_TO_PROTOCOL;
    
    int packetLength = (packet[2] << 8) + packet[3];
    
    int ipHeaderLength = (*packet & 0x0F) << 2;
    packet += ipHeaderLength;
    
    int port = (packet[2] << 8) + packet[3];
    
    packet += UDP_HEADER_LENGTH;
    int dataLength = packetLength - ipHeaderLength - UDP_HEADER_LENGTH;
    
    printf("Got Packet\n\
           \r Length: %d\n\
           \r Port: %d\n", header->len, port);
}