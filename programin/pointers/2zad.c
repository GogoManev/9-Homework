#include <stdio.h>
#include <string.h>

int main()
{
    char name[255];
    printf("Napishi neshto: ");
    fgets(name, 255, stdin);
    char* p = strchr(name, '\n');
    if(p != 0){
        *p = '\0';
    }
    printf("Napisal si: %s\n", name);

}