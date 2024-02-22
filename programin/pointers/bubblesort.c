#include <stdio.h>

void bubblesort(int arr[], int size, void (*swapelements)(int *, int *), int (*compare)(const void *, const void *))
{
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            int result = (*compare)(&arr[j], &arr[j + 1]);
            if (result > 0){
                (*swapelements)(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int compare_func(const void *a, const void *b)
{
    if (*(int *)a > *(int *)b){
        return 1;
    }
    else if (*(int *)a == *(int *)b){
        return 0;
    }
    else{
        return -1;
    }
}

int main()
{
    int array[5] = {5, 4, 3, 1, 6};
    bubblesort(array, 5, swap, compare_func);
    for (int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }
    return 0;
}