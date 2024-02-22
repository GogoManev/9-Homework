#include <stdio.h>

#define DEBUG(NAME, VALUE, LINE)\
printf(__FILE__);\
printf("\n"#NAME" = %d", VALUE);\
printf("\nLine: %d", LINE);


int main()
{
    int n = 892;
    DEBUG(n, n, __LINE__);

    return 0;
}