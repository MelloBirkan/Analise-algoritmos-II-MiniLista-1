#include "bitonic.h"
#include <stdio.h>


int max(int *vet, int n) {
  int mid = n/2;
  int left[n/2];
  int right[n/2];

  for (int i = 0; i < mid; ++i) {
    left[i] = vet[i];
  }
  
  for (int i = mid; i < n; ++i) {
    left[i - mid] = vet[i];
  }
  
  switch (n) {
    case 1:
      return *vet;
      break;
    
    case 2:
    if (*(vet + 1) > *vet) {
      return *(vet + 1);
    } else {
      return *vet;
    }
    break;
    
    default:
      if (max(left, mid) > max(right, mid)) {
        return (max(left, mid));
      } else {
        return (max(right, mid));
      }
      break;
  }
}