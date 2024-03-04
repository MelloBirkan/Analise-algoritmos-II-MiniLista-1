#include "mdc/mdc.h"
#include "bitonic/bitonic.h"
#include <assert.h>
#include <stdio.h>

void test_mdc() {
  assert(mdc(270, 192) == 6);
  assert(mdc(35, 10) == 5);
  assert(mdc(10, 15) == 5);
  assert(mdc(31, 2) == 1);
  printf("Todos os Testes de mdc passaram!\n");
}

void test_max_bitonic() {
   int vet[5] = {2,5,8,7,3};
  assert(max(vet, 5) == 8);
  printf("Teste de encontrar o maximo número num array bitonic passou!\n");
}

int main() {
  test_mdc();
  test_max_bitonic();
}