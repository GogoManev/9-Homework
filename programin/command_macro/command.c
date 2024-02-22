#include <stdio.h> 

#define COMMAND(NAME,TYPE) TYPE ## _ ## NAME ## _command
#define DEFINE_COMMAND(NAME,TYPE) void COMMAND(NAME,TYPE)(void) 

DEFINE_COMMAND(quit, external) {
  printf("\n1 2 3 4 5");
}
DEFINE_COMMAND(function, command) {
  printf("\nHello, World");
}
int main() {
  COMMAND(quit, external)();
  COMMAND(function, command)();
  
  return 0;
}