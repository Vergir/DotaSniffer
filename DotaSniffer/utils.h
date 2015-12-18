#ifndef utils_h
#define utils_h

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

double GetTimeSince(time_t moment, double defaultValue);
void SetupLogFile(const char * executableName);

#endif
