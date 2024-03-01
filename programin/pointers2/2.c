#include <stdio.h>

void swap(int * a, int * c)
{
    int temp = *a;
    *a = *c;
    *c = temp;
}

void bubbleSort(int * arr, int len)
{
    for (int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            if(*(arr+i) < *(arr+j)){
                swap((arr+i),(arr+j));
            }
        }
    }
}


int main()
{
    int arr[6] = {3, 64, 12, 1, 0, 5};
    bubbleSort(arr, 6);
    for(int i = 0; i < 6; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
