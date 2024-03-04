#include "bitonic.h"
#include <stdio.h>

int max(int *array, int n) {
  if (n == 1) {
    return array[0];
  } else if (n == 2) {
    return array[0] > array[1] ? array[0] : array[1];
  }

  int mid = n / 2;
  int max_left = max(array, mid);
  int max_right = max(array + mid, n - mid);

  return max_left > max_right ? max_left : max_right;
}
