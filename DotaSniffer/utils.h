#ifndef utils_h
#define utils_h

#include <fcntl.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STDIN_FD 0

double GetTimeSince(time_t moment, double defaultValue);
char * TimeToString(time_t time, suseconds_t microSeconds);

void RedirectErrors(const char * executableName);

void SetupStdin();


#endif
