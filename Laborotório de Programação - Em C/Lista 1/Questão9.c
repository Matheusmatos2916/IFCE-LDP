#include <stdio.h>

int main(void) {
  int N;
  printf("Insira um número:");
  scanf("%d", &N);
  printf("O sucessor de %d é: %d", N, N+1);
  printf("\nO antecessor de %d é: %d\n", N, N-1);
  return 0;
}