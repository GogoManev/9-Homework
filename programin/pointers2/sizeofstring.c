#include <stdio.h>
#include <string.h>

int slen(char (*p)[300])
{
    int len = 0;
    for(int i = 0; (*p)[i] != '\0'; i++){
        len++;
    }

    return len;
}

void main()
{
    char rizz[300] = "oriz";
    char (*p)[300] = &rizz;
    int result = slen(p);
    printf("%d", result);
}