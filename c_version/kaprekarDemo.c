#include<stdlib.h>
#include<stdio.h>

#include "kaprekarUtils.h"

int main(int argc, char **argv) {

  if(argc == 1) {
    printf ("Usage: %s n\n", argv[0]);
    exit(1);
  }

  int n = atoi(argv[1]);

  if(isKaprekar(n) == 1) {
    printf("%d is a Kaprekar Number!\n", n);
  } else {
    printf("%d is not a Kaprekar Number!\n", n);
  }

  return 0;
}
