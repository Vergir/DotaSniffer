#ifndef utils_h
#define utils_h

#include <fcntl.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STDIN_FD 0

#define STREAM_STANDART argv[0]
#define STREAM_TO_CONSOLE "ayy lmao"
#define STREAM_TO_FILE
#define STREAM_SUPRESS "/dev/null"

typedef enum {false, true} boolean;
typedef enum {SupressErrors, ErrorsToConsole, ErrorsToFile} ErrorOutput;
typedef enum {NoProgramOutput, ProgramOutputToConsole, ProgramOutputToFile} ProgramOutput;

double GetTimeSince(time_t moment, double defaultValue);
char * TimeToString(time_t time, suseconds_t microSeconds);

void RedirectErrors(const char * executableName);

void SetupStdin();

void ConfigureStreams(const char * argv0, ErrorOutput eo, ProgramOutput po);



#endif
