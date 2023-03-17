//Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n. Obs.: Utilize operadores binarios.



#include <stdio.h>

int main()
{
  int X, N, valor;

  printf("Insira um valor para o elemento X:");
  scanf("%d", &X);

  printf("Insira um valor para o expondencial:");
  scanf("%d", &N);

  valor = X * 2<<(N-1);

  
  printf("O produto entre %d por 2 elevado a %d é: %d\n", X, N, valor);

  return (0);
}