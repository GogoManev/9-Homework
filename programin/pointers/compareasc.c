#include <stdio.h>

int compareasc(const void * const a, const void * const b)
{
    if(*(int *)a > *(int *)b){
        return 1;
    }else if(*(int *)a == *(int *)b){
        return 0;
    }else{
        return -1;
    }
}

int comparedesc(const void * const a, const void * const b)
{
    if(*(int *)a < *(int *)b){
        return 1;
    }else if(*(int *)a == *(int *)b){
        return 0;
    }else{
        return -1;
    }
}

int main()
{
    int a = 1, b = 2;
    const void * const p1 = &a;
    const void * const p2 = &b;
    printf("%d\n", compareasc(p1,p2));
    printf("%d\n", comparedesc(p1,p2));
    return 0;
}