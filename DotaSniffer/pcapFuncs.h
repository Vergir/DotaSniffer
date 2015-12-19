#ifndef pcapFuncs_h
#define pcapFuncs_h

#include <stdio.h>
#include <pcap.h>
#include <stdlib.h>
#include "utils.h"

void SamplePcapHandler(u_char *args, const struct pcap_pkthdr *header,const u_char *packet);

pcap_if_t * GetDevices();
int CountDevices(pcap_if_t * devices);

pcap_t * OpenDevice(const char * device, int readTimeOut);
int ApplyFilter(const char * device, pcap_t * handle, const char * filterString);
int StartLoop(pcap_t * handle, pcap_handler callback);
void CloseSniffer(pcap_t * handle);

int Sniff(const char * device, const char * filterString, pcap_handler callback);
int Test(const char * device, const char * filterString, double testTime);

#endif
