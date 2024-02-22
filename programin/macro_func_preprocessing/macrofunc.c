#include <stdio.h>
#define MACRO(A,B){\
int tva = (A+B)*(A+B);\
printf("%d",tva);\
}

int main(void)
{
    int edno = 2, tri = 4;
    MACRO(edno, tri);
}