#include <stdio.h>

int sorting(int a[], int n)
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

int prosto(int a)
{
    int n = 0, prosto = 0;
    for(int i = 2; i <= n; i++){
        if(n%i == 0){
            prosto = 1;
            break;
        }
    }

    return prosto;
}
int brNaCifrite(int n)
{
    int br = 0;
    for(int i = 0; i <= n; i++){
        n = n / 10;
        br++;
    }

    return br;
}

int obshtaFunc(int a[], int n){
    sorting(a, n);

    for(int i = 0; i < n; i++){
        prosto(a[i]);
        brNaCifrite(a[i]); 
    }
}

int main(void)
{
    int arr[5] = {23, 34, 132, 425, 6};

    obshtaFunc(arr, 5);
}
