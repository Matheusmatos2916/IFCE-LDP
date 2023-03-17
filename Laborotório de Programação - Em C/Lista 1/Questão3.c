//Faça um programa capaz de ler um valor real e escrevê-lo com apenas uma casa decimal.
#include <stdio.h>

int main(void) {

  float N;
  
  printf("Insira um número real:");
  scanf("%f", &N);

  printf("Número em formato inteiro: %d\n", (int)N);
  return 0;
}