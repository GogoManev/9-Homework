#include <stdio.h>
#include <string.h>

int strlength(const char *str) 
{
    return strlen(str);
}

void strconcat(char *result,char *str1,char *str2) 
{
    strcpy(result,str1);
    strcat(result,str2);
}

int strcompare(const char *str1,const char *str2) 
{
    return strcmp(str1,str2);
}

int main() 
{
    printf("1.strlength - Namira duljinata na string.\n");
    printf("2.strconcat - Surzva dva stringa.\n");
    printf("3.strcompare - Sravnqva dva stringa.\n");
    return 0;
}
