#include <math.h>
#include "quadraticroots.h"

struct QuadraticRootsResult findroots(long double a, long double b, long double c)
{
    struct QuadraticRootsResult result;
    long double rez = b*b-4*a*c;
    if(rez >= 0){
        result.x1 = (-b + sqrtl(rez)) / 2*a;
        result.x2 = (-b - sqrtl(rez)) / 2*a;
    }else{
        result.norealroots = 1;
    }

    return result;
}