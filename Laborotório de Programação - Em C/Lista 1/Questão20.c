//Escreva um programa que receba um n ́umero inteiro e ent ̃ao determine e imprima se ele  ́e par ou  ́ımpar. Obs.: N ̃ao utilizar estrutura de decis ̃ao if.
#include <stdio.h>

int main(void) {
   int Num;

  printf("Informe um número:");
  scanf("%d", &Num);

  switch(Num % 2){
    case 0: 
      printf("O número é par\n");
      break;
    case 1: 
      printf("O número é ímpar\n");
      break;
  }
  

  return 0;
}