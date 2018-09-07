#include<stdlib.h>
#include<stdio.h>

#include "kaprekarUtils.h"

/*
Name: Jeffrey Park
Date: 09/07/18
Description: The demo class will check if input number is kaprekar number or not
*/

int main(int argc, char **argv) {
  if(argc != 2) { //check if the command-line input is appropriate
    fprintf(stderr, "Usage: %s n\n", argv[0]);
    exit(1);
  }

  int n = atoi(argv[1]); //reads the input from command-line

  if(isKaprekar(n)) { //calls isKaprekar method in utill file, output appropriate messages accordingly
    printf("%d is a Kaprekar Number!\n", n);
  } else {
    printf("%d is not a Kaprekar Number!\n", n);
  }

  return 0;
}
