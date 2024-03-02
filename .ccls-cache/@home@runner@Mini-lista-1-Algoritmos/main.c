#include "mdc/mdc.h"
#include <assert.h>
#include <stdio.h>

void test_mdc() {
  assert(mdc(270, 192) == 6);
  assert(mdc(35, 10) == 5);
  assert(mdc(10, 15) == 5);
  assert(mdc(31, 2) == 1);
  printf("Todos os Testes de mdc passaram!");
}

int main() {
  test_mdc();
}