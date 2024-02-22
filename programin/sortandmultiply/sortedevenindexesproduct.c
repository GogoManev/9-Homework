#include <stdio.h>

void bubblesort(int *arr, int arrlen);
int sortedevenindexesproduct(int *arr, int arrlen);

int main(void) {
  int array[5] = {1,9,3,2,5}; 
  int product = sortedevenindexesproduct(array, 5);
  printf("\n%d", product);
  return 0;
}

void bubblesort(int *arr, int arrlen) {
  for (int i = 0; i < arrlen - 1; i++) {
    for (int j = 0; j < arrlen - i - 1; j++) {
      if (arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

int sortedevenindexesproduct(int *arr, int arrlen) {
  int product = 1;
  bubblesort(arr, arrlen);
  for (int i = 2; i < arrlen; i+=2) {
    product *= arr[i];
  }

  return product;
}