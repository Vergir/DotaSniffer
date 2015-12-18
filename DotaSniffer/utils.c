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

void RedirectErrors(const char * executableName) {
    char path[256];
    
    if ((executableName == NULL) || realpath(executableName, path))
        strcpy(path, "/dev/null");
    else
        strcat(path, ".log");
    
    freopen(path, "w", stderr);
    setbuf(stderr, NULL);
    return;
}
