#include <stdio.h>
#include "safeint.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        reportError("Usage: ./safeadd <num1> <num2>");
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    SafeResult result = safemultiply(a, b);
    if (result.errorflag) {
        reportError("Ima overflow ili underflow");
        return 1;
    }

    printf("%d\n", result.value);
    return 0;
}
