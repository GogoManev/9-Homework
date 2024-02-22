#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
    int a = 10,b = 12;
    void * p1 = &a;
    void * p2 = &b;
    swap((int *)p1,(int *)p2);
    printf("%d %d", *(int *)p1, *(int *)p2);
    return 0;
}