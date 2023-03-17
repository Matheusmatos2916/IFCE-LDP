//    2. Fa¸ca  um  programa  que  leia  um  valor  inteiro  decimal  X e  escreva,  na  tela,  este  mesmo valor nas  bases hexadecimal e octal. Ex.: Entre com o valor: 10 Hexadecimal: A Octal: 12

#include <stdio.h>

int main(void) {
  int N;

  printf("Insira um número decimal:");
  scanf("%d", &N);

  
  printf("Esse número em octal: %o\n", N);
  printf("Esse número em hexadecimal : %X\n", N);
  
  return 0;
}