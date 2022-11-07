#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  char *userName = argv[1];

  // BAD: a string from the user is injected directly into
  // a command line.
  char command1[1000] = {0};
  sprintf(command1, "finger %s", userName);
  system(command1);
}