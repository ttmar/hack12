/**
Author: Victor Nguyen, Collin Sipple, David Ryan
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

long choose(int n, int k) {
  if(k > n || k < 0 || n < 0) {
    return 0;
  }
  if(k == 0 || n == k) {
    return 1;
  }
  return (choose((n - 1), k) + choose((n - 1), (k - 1)));
}

long chooseCare(int n, int k, long **table) {
  if(k > n || k < 0 || n < 0) {
    return 0;
  }
  if(k == 0 || n == k) {
    return 1;
  }
  if(table[n][k] != -1) {
    return table[n][k];
  } else {
    table[n][k] = chooseCare((n - 1), k, table) + chooseCare((n - 1), (k - 1), table);
  }
  return (chooseCare((n - 1), k, table) + chooseCare((n - 1), (k - 1), table));
}
