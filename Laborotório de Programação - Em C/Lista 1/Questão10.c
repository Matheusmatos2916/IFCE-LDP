//Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a formula VOLUME = COMPRIMENTO * LARGURA * ALTURA.

#include <stdio.h>

int main(void) {

  float Comprimento, Largura, Altura, Volume;
  
  printf("Insira o comprimento da caixa retangular(em cm):");
  scanf("%f", &Comprimento);

  printf("Insira a largura da caixa retangular(em cm):");
  scanf("%f", &Largura);

  printf("Insira a altura da caixa retangular(em cm):");
  scanf("%f", &Altura);

  
//Fórmula da área de uma caixa retangular

  Volume = Comprimento * Largura * Altura;



  printf("O volume corresponde é: %.2f cm\n", Volume);
  
  return 0;
}