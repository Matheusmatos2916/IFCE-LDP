// Escreva um programa que leia duas variaveis A e B e efetue a troca dos valores. O objetivo  ́e que a variavel A passe a conter o valor de B e a vari ́avel B passe a possuir o valor de A. Apresente os valores apos a efetivacao do processamento da troca.


#include <stdio.h>

int main(void) {
  int A, B, Aux;

  printf("Insira o primeiro número:");
  scanf("%d", &A);

  printf("Insira o primeiro número:");
  scanf("%d", &B);

  Aux = A;
  A = B;
  B = Aux;

  printf("O valor de A: %d\n", A);
  printf("O valor de B: %d", B);
  return 0;
}