/*/ Escrever um programa que receba um valor inteiro do usu ́ario e apresente o seu valor absoluto (m ́odulo).
N ̃ao utilize estrutura de decis ̃ao if. /*/
#include <stdio.h>
#include <math.h>

int main(void) {
  
  int X; 
  
  printf("Insira um número:");
  scanf("%d", &X);
  X =abs(X); 
  
  printf("O valor em módulo desse numéro é: |%d|\n", X);
}