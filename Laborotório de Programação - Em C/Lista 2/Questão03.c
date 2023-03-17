//Escreva um programa que leia um n ́umero inteiro e positivo F e calcule o fatorial deste n ́umero.

#include <stdio.h>

int main(void) {
  int F, op;
  
  printf("Insira um número inteiro positivo:");
  scanf("%d", &F);

  for( op = 1; F > 1; F = F - 1){
     
    op = op * F;
  }

  printf("O valor fatorial do número informado é: %d\n", op);

  return 0;
}