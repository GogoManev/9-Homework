#include <stdio.h>
#include <limits.h>

#define tipove(type) \
    printf("Tip: %s\n", #type); \
    printf("Format: %s\n", sizeof(type) == 1 ? "hh" : sizeof(type) == 2 ? "h" : sizeof(type) == 4 ? "l" : "ll"); \
    printf("Razmer: %zu\n", sizeof(type)); \
    printf("Signed Max: %d\n", (int)((type)(-1) > 0 ? (type)(~(type)0) >> 1 : (type)(~(type)0))); \
    printf("Signed Min: %d\n", (int)((type)(-1) > 0 ? (type)~(type)(-1) : (type)(1 << (sizeof(type) * CHAR_BIT - 1)))); \
    printf("Unsigned Max: %u\n\n", (unsigned int)((type)(-1) > 0 ? (type)(~(type)0) : (type)(-1)));

int main() {
    tipove(char);
    tipove(short);
    tipove(int);
    tipove(long);
    tipove(long long);

    return 0;
}
