#ifndef SCHOOL_CLASS_H
#define SCHOOL_CLASS_H

#include "person.h"

struct SchoolClass {
    
    int students[26];
    char paralelka;
    int numbers[26];
    struct Person teacher;
};

#endif