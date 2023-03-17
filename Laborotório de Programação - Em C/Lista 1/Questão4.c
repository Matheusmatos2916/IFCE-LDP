// Sabendo que os argumentos da fun ̧c ̃ao ”printf”podem ser express ̃oes (a+b, a/b, a*b...), e n ̃ao somente argumentos, fa ̧ca um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e seu meio.

#include <stdio.h>
#include <math.h>

int main(void) {
  int X;
  
  printf("Insira um número:");
  scanf("%d", &X);

  printf("O triplo do número informado é: %d\n", X*3);
  printf("O quadrado do número informado é: %d\n", X * X);
  printf("O meio do número informado é: %.2f\n", (float)X/2);
  
  
  return 0;
}