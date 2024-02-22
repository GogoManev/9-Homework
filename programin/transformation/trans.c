#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trans.h"

struct transformation stringToNumber(const char* input) {
    struct transformation result;
    char* endptr;

    result.result = strtol(input, &endptr, 10);

    if (*endptr != '\0') {
        result.result = 0;
        snprintf(result.error, 100, "Invalid input string");
    } else {
        result.error[0] = '\0'; 
    }

    return result;
}

