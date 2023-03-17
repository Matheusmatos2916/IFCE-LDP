//Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos ha neste tempo.
#include <stdio.h>

int main(void) {
 int S, M, H;

   printf("Insira o total de segundos:");
   scanf("%d", &S);

   H = S/3600;
   M = S/60;
  
  printf("\nHoras: %d h", H);
  printf("\nMinutos: %d m", M);
  printf("\nSegundos: %d s\n", S);
  return 0;
}