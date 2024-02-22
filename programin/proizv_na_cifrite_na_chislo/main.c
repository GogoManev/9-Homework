#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, proizv;

    do{
        printf("Napishi stoinost na n:");
        scanf("%d", &n);
    }
    while (n < 1);
    for(proizv = 1; n != 0; n = n / 10){
        proizv *= n%10;
    }
    printf("Proizvedenie na cifrite na n e %d", proizv);
}
