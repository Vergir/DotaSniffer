#ifndef utils_h
#define utils_h

#include <fcntl.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STDIN_FD 0

typedef enum {false, true} boolean;
typedef enum {NoLog, LogToScreen, LogToFile} ProgramLog;
typedef enum {NoOutput, OutputToScreen, OutputToFile} ProgramOutput;

double GetTimeSince(time_t moment, double defaultValue);
char * TimeToString(time_t time, suseconds_t microSeconds);

void ConfigureStreams(const char * argv0, ProgramLog pl, ProgramOutput po);



#endif
