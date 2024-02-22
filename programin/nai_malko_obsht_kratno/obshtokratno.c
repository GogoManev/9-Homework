#include <stdio.h>

int main(void)
{
    int a = 12, b = 18, min = a, obshtkratno;

    for (int i = 1; i <= b; i++){
        if (min % b == 0)
            {
                obshtkratno = min; 
                break;
            }
        min = a * i;
    }
    printf("%d", obshtkratno);
    
}