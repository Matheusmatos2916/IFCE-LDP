// Escreva um programa que leia dois inteiros e entao determine e imprima se o primeiro e multiplo do segundo. Obs.: Nao utilizar estrutura de decis ̃ao if.


#include <stdio.h>

int main(void) {
 int N1, N2, R; 

 printf("Informar o primeiro número:");
 scanf("%d", &N1);

  
 printf("Informar o segundo número:");
 scanf("%d", &N2);

  R = N1 % N2;
  
   switch(R){
    case 0: 
      printf("O número é multiplico\n");
      break;
    default: 
      printf("O número é não multiplico\n");
      break;
  }
  

  
  return 0;
}