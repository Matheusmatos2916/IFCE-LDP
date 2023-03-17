// Escreva um programa que leia uma temperatura em graus Celsius e apresente
// convertida em graus Fahrenheit. A f ́ormula de vers ̃ao  ́e F = (9 * C + 160) /
// 5, sendo F a temperatura Fahrenheit e C a temperatura em Celsius.

#include <stdio.h>

int main(void) {

  float C, F;

  printf("Insira a temperatura em  °C:");
  scanf("%f", &C);

  // Fórmula de conversão

  F = (9 * C + 160) / 5;

  printf("A temperatura em Fahrenheit: %.2f\n", F);

  return 0;
}