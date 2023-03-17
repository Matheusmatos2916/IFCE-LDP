//Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao quadrado.

#include <stdio.h>
#include <math.h>

int main(void) {
  int N;
  
  printf("Insira um valor inteiro:");
  scanf("%d", &N);
  
   N =  pow(N, 2);
  
  printf("O resultado da potênciação é: %d\n", N);
  return 0;
}