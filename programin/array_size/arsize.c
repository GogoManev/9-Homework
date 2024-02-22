#include <stdio.h>
#include <math.h>
#define ARRAY_SIZE 0

int main(void)
{
    #ifdef ARRAY_SIZE
    int arr[ARRAY_SIZE] = {0};
    #endif

    #if ARRAY_SIZE < 10 && ARRAY_SIZE > 1
    for(int i = 0; i < ARRAY_SIZE; i++){
        arr[i] = pow(2, i);
        printf("%d ", arr[i]);
    }
    #else
    printf("Ne moje");
    #endif

}