#include <stdio.h>
#include "quadraticroots.h"

int main()
{
    long double a = 1.5, b = 2.362, c = 2;
    struct QuadraticRootsResult result = findroots(a, b, c);
    printf("%Lf ", result.x1);
    printf("%Lf ", result.x2);
}