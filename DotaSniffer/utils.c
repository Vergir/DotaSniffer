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


void RedirectErrors(const char * executableName) {
    char path[256];
    
    if ((executableName == NULL) || realpath(executableName, path))
        strcpy(path, "/dev/null");
    else
        strcat(path, "_errors.log");
    
    freopen(path, "w", stderr);
    setbuf(stderr, NULL);
    return;
}

void SetupStdin() {
    setbuf(stdin, NULL);
    
    int flags = fcntl(STDIN_FD, F_GETFL, 0);
    if(fcntl(STDIN_FD, F_SETFL, flags | O_NONBLOCK))
        fputs("Could not set stdin to non-blocking mode\n", stderr);
}
