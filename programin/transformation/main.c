#include <stdio.h>
#include "trans.h"

int main() {
    const char* validInput = "-123";
    const char* invalidInput = "12ab23";

    struct transformation resultValid = stringToNumber(validInput);
    struct transformation resultInvalid = stringToNumber(invalidInput);

    printf("Valid Input: %ld, Error: %s\n", resultValid.result, resultValid.error);
    printf("Invalid Input: %ld, Error: %s\n", resultInvalid.result, resultInvalid.error);

    return 0;
}
