#include <stdio.h>
#include <limits.h>
#include <string.h>
#include "safeint.h"

SafeResult safeadd(int a, int b) {
    SafeResult result;
    result.value = a + b;
    result.errorflag = (a > 0 && b > 0 && result.value <= 0) || (a < 0 && b < 0 && result.value >= 0);
    return result;
}

SafeResult safesubtract(int a, int b) {
    SafeResult result;
    result.value = a - b;
    result.errorflag = (b > 0 && a < INT_MIN + b) || (b < 0 && a > INT_MAX + b);
    return result;
}


SafeResult safemultiply(int a, int b) {
    SafeResult result;
    result.value = a * b;
    result.errorflag = (b != 0 && result.value / b != a) || (a == INT_MIN && b == -1);
    return result;
}

SafeResult safedivide(int a, int b) {
    SafeResult result;
    if (b == 0) {
        result.errorflag = 1;
        result.value = 0;
    } else {
        result.value = a / b;
        result.errorflag = 0;
    }
    return result;
}


// SafeResult safestrtoint(const char *str);
//     SafeResult result;
//     result.value = (int)(str);
//     result.errorflag = (a > 0 && b > 0 && result.value <= 0) || (a < 0 && b < 0 && result.value >= 0);
//     return result;
// }


int main()
{
    int a = 5, b = 2;
    SafeResult result = safeadd(a, b);
    SafeResult result1 = safesubtract(a, b);
    SafeResult result2 = safemultiply(a, b);
    SafeResult result3 = safedivide(a, b);
    printf("%d ", result);
    printf("%d ", result1);
    printf("%d ", result2);
    printf("%d", result3);
    return 0;
}