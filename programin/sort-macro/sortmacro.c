#include <stdio.h>

#define SWAP(A, B, TYPE){\
TYPE t = A; \
    A = B; \
    B = t; \
}

#define SORT(NAME, SIZE, TYPE, COMPARE ){ \
    TYPE t; \
    for(int i = 0; i < SIZE - 1; i++){ \
        for(int j = 0 ; j < SIZE - 1 - i; j++){ \
            if(NAME[j] COMPARE NAME[j+1]) \
            SWAP(NAME[j], NAME[j+1], TYPE) \
        } \
    } \
}

int main() 
{
    int arr[] = {213, 42, 654, 4};
    SORT(arr, 4, int, >);
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}