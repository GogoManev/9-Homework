#include <stdio.h>
#define DEBUG 

int sort(int a[], int n);
int sumNaTri(int a[], int n);


int main()
{
    int arr[5] = {27, 455, 9, 11, 69};
    sort(arr, 5);
    #ifdef DEBUG
    printf("Sortiran masif: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    #endif
    sumNaTri(arr, 5);    
    return 0;
}

int sort(int a[], int n)
{
    int temp = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int sumNaTri(int a[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(i%3 == 0){
            #ifdef DEBUG
            printf("\nChsilo na index, delqsht se na tri: %d", a[i]);
            #endif
            sum += a[i];
        }
    }
    printf("\nSum na tri = %d", sum);
}