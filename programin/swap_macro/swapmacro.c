#include <stdio.h>

#define SWAP(A, B, TYPE){\
TYPE t = A; \
    A = B; \
    B = t; \
}

int main()
{
    int a = 69, b = 4279;
    SWAP(a, b, int);
    printf("%d, %d", a, b);
    return 0;
}