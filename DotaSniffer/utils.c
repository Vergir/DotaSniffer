#include "utils.h"

time_t t;

double GetTimeSince(time_t moment, double defaultValue) {
    time_t now = time(NULL);
    
    if (now == ((time_t) - 1)) {
        fputs("Error getting current time\n", stderr);
        return defaultValue;
    }
    
    if (moment == NULL)
        return defaultValue;
    
    return difftime(now, moment);
}

char * TimeToString(time_t time, suseconds_t microSeconds) {
    int timeStampLength = 32;
    
    struct tm * timeStamp = localtime(&time);
    
    char timeStampString[timeStampLength];
    if (strftime(timeStampString, timeStampLength, "%F %T", timeStamp) == 0) {
        fputs("Error converting time to string (strftime)\n", stderr);
        return NULL;
    }
    if (microSeconds)
        sprintf(timeStampString, "%s.%06d", timeStampString, microSeconds);
    
    return timeStampString;
}

void ConfigureStreams(const char * argv0, ProgramLog pl, ProgramOutput po) {
    char path[256];
    //Configure stderr
    setbuf(stderr, NULL);
    switch (pl) {
        case NoLog:
            strcpy(path, "/dev/null");
            freopen(path, "w", stderr);
            break;
        case LogToFile:
            realpath(argv0, path);
            strcat(path, "_log.txt");
            freopen(path, "w", stderr);
            break;
        case LogToScreen:
            break;
        default:
            break;
    }
    //Configure stdout
    switch (po) {
        case NoOutput:
            strcpy(path, "/dev/null");
            freopen(path, "w", stdout);
            break;
        case OutputToFile:
            realpath(argv0, path);
            strcat(path, "_output.txt");
            freopen(path, "w", stdout);
            break;
        case OutputToScreen:
            break;
        default:
            break;
    }
    //Configure stdin
    setbuf(stdin, NULL);
    int flags = fcntl(STDIN_FD, F_GETFL, 0);
    if(fcntl(STDIN_FD, F_SETFL, flags | O_NONBLOCK))
        fputs("Could not set stdin to non-blocking mode\n", stderr);
}
