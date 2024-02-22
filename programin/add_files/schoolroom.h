#ifndef SCHOOL_ROOM_H
#define SCHOOL_ROOM_H

#include "person.h"

struct SchoolRoom {
    
    int roomnumber;
    struct Person attendants[50];
};

#endif