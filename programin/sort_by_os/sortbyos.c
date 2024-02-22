#include <stdio.h>
#ifdef _WIN32
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
#elif defined __linux__
int sort(int a[], int n)
{
    for (int i = 0; i < n-1; i++){
            int pos = i, temp = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (a[pos] > a[j]){
                    pos = j;
                }
            }
            if (pos != i){
                temp = a[i];
                a[i] = a[pos];
                a[pos] = temp;
            }
        }
}
#elif defined __APPLE__
int sort(int a[], int n)
{
    for (int i = 1; i < n; i++){
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}
#else
int sort(int a[], int n)
{
    int temp = 0;
    for (int i = 0; i < n-1; i++) {
        temp = a[i];
        a[i] = a[n-1];
        a[n-1] = temp;
        n--;
    }
}
#endif


int main(void)
{
    int arr[5] = {35, 823, 12, 3, 90};
    sort(arr, 5);

    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
}