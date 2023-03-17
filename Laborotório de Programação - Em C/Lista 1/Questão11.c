//Elabore um programa que apresente o valor da convers ̃ao em d ́olar de um valor lido em real. O programa deve solicitar o valor da cota ̧c ̃ao do d ́olar e tamb ́em a quantidade de reais que o usu ́ario deseja converter.




#include <stdio.h>

int main(void) {
  float Contacao, Real, Dolar;
  
  printf("Insira o valor da contação do dólar:");
  scanf("%f", &Contacao);

  printf("\nInsira a quantidade de reais:");
  scanf("%f", &Real);

  Dolar = Real / Contacao;

  printf("A quantidade de reais em doláres: $ %.2f\n", Dolar);
  
  return 0;
}