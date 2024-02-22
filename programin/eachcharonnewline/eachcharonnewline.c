#include <stdio.h>

int printcharsonnewline(char s[]);

int main() {
  char input[] = "someString";
  printcharsonnewline(input);
  return 0;
}

int printcharsonnewline(char s[]) {
  for (char index = 0; s[index] != '0'; index++) {
    printf("%c\n", s[index]);
  }
}