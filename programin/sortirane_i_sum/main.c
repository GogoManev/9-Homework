#include <stdio.h>
#define dez 6

int main() {
  int a[dez], n, i, j, temp, sum;

  printf("Napishi broqt chisla: ");
  scanf("%d", &n);

  printf("Napishi chislata:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  for (i = 0; i < n-1; i++) {
    for (j = 0; j < n-i-1; j++) {
      if (a[j] > a[j+1]) {
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
        sum = temp * j;
      }
    }
  }

  printf("\nSortirammmm\n");
  for (i = 0; i < n; i++) {
    printf("\n%d", a[i]);
    sum += a[i] * i;
  }
  printf("\nRezultat : %d", sum);

  return 0;
}
