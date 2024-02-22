#include <stdio.h>

#define NESHTO(A, COMPARE, B)\
if(A COMPARE B){\
    printf("DA");\
}else{\
    printf("NE");\
}


int main()
{
    int a = 24;
    int b = 5;
    NESHTO(a, ==, b);

    return 0;
}