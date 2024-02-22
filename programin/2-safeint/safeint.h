#ifndef SAFEINT
#define SAFEINT
#include "util.h"

typedef struct SafeResult {
    int value;
    char errorflag;
} SafeResult;

SafeResult safeadd(int a, int b);
SafeResult safesubtract(int a, int b);
SafeResult safemultiply(int a, int b);
SafeResult safedivide(int a, int b);
SafeResult safestrtoint(const char *str);

#endif
