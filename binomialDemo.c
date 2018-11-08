/**
Author: Victor Nguyen, Collin Sipple, David Ryan, Tony Ong, Alexis Linhardt,  Serigne Toure, Jake Wilson
My NU ID: 02357235
CLASS: 155E
Section 250
Date Started: 11/08/2018
Date Finished: 11/09/2018
*
*
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "binomial.h"


int main(int argc, char **argv) {
  if(argc != 3) {
    printf("Correct usage: a.out n k\n");
  }
  //Create a memoization values table initialized to -1
  long **memoizationTable = (long **) malloc(sizeof(long *) * (atoi(argv[1]) + 1));
  for(int i = 0; i < (atoi(argv[1]) + 1); i++) {
    memoizationTable[i] = (long *) malloc(sizeof(long) * (atoi(argv[2]) + 1));
    for(int j = 0; j < (atoi(argv[2]) + 1); j++) {
      memoizationTable[i][j] = -1;
    }
  }
  //Take two numbers n, k for choose()
  long biCoeff = chooseCare(atoi(argv[1]), atoi(argv[2]), memoizationTable);
  printf("C(%d, %d) = %ld\n", atoi(argv[1]), atoi(argv[2]), biCoeff);
  for(int i = 0; i < (atoi(argv[1]) + 1); i++) {
    free(memoizationTable[i]);
  }
  free(memoizationTable);
  return 0;
}
