// Escreva um programa que leia um vetor do usuario e imprima seus valores e
// seus enderecos. Teste o vetor com tipos de dados diferentes, analise os
// enderecos. O que voc^e observou?

#define TAM 10

#include <stdio.h>

int main(void) {
  // int Str[TAM];
  char Str[TAM];
  // int *PS = NULL;
  char *PS = NULL;

  PS = Str;

  for (int k = 0; k < TAM; k++) {

    printf("Informe o %d° de %d:", k + 1, TAM);
    scanf(" %c", (PS + k));
  }

  puts("\nValores fornecidos\n");

  for (int k = 0; k < TAM; k++) {
    printf("%d° de %d com endereço [%p] : %c\n", k + 1, TAM, PS + k, *(PS + k));
  }

  return 0;
}

/* Conclusão: O último  dígito do endereço é sequencial - ex - em char:
 * {6,7,8,9,a,b,c,d,e,f} */
