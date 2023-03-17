//Elaborar um programa que apresente a m edia aritmetica dos n ́umeros inteiros existentes entre uma faixa especificada pelo usu ́ario.

#include <stdio.h>

int main(void) {
   int I, F, D;
   float M, S = 0; 

  printf("Insira o valor inicial do intervalo:");
  scanf("%d", &I);

  printf("Insira o valor final do intervalo:");
  scanf("%d", &F);

  D = F - I;
  
  for (int i = I; i <= F; i++){

     S = S + i;
    
  }

  M = S/D;

  printf("A média é: %.2f\n", M);
  return 0;
}