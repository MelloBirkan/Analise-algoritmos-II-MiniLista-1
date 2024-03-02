#include "mdc.h"
#include <stdio.h>

int mdc(int x, int y) {
  if (x == y) {
    return x;

    // Se X é par
  } else if (x % 2 == 0) {
    if (y % 2 == 0) {
      return 2 * mdc(x/2, y/2);
    } else if (y % 2 == 1) {
      return mdc(x/2, y);
    }

    // Se X é impar
  } else if (x % 2 == 1) {
    if (y % 2 == 0) {
      return mdc(x, y/2);

      // Se X e Y são impares
    } else if (y % 2 == 1) {
      if (x > y) {
        return mdc((x-y)/2, y);
      } else if (x < y) {
          return mdc(x, (y-x)/2);
        }
    }
}
  return -1;
}
