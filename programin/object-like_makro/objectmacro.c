#include <stdio.h>

#define deez 5
#define PRINT_ARRAY(ARR, SIZE) \
    for(int i = 0; i < SIZE; i++){\
        printf("%d ", ARR[i]);\
    }

int main(void)
{
    int a[deez] = {32, 43, 13, 42, 55};
    PRINT_ARRAY(a, deez);

    return 0;
}