// Faca um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.

#include <stdio.h>

int main(void) {
 int S, M, H;

   printf("Insira o total de horas:");
   scanf("%d", &H);

   printf("Insira o total de minutos:");
   scanf("%d", &M);

   printf("Insira o total de segundos:");
   scanf("%d", &S);

   H = H*3600;
   M = M* 60;
  
  printf("\nHoras em segundos: %d s", H);
  printf("\nMinutos em segundos: %d s", M);
  printf("\nSegundos: %d s\n", S);
  return 0;
}