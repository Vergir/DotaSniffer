# DotaSniffer
Tool that sniffs DotA 2 packets using pcap

## Summary ##

This repo showcases how one can use **pcap** library to sniff packets from arbitrary application in pure C.

Though using plain pcap functions may prove to be inconvenient, thus some friendly wrappers around them are implemented in *PcapFuncs*.

Development of this project ceased due to the fact that DotA uses protobuf to compress/decompress packets before sending, and author had no more free time to dwell.
