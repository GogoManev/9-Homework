#include <stdio.h>
#include "schoolroom.h"
#include "schoolclass.h"

int main(void)
{
    struct School
    {
        struct SchoolClass classes[20];
        struct SchoolRoom rooms[10];
    };

    struct School school1;
}