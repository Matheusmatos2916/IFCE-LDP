//Elaborar  um  programa  que  apresente  os  valores  de  convers˜ao  de  graus  Celsius  em  graus  Fahrenheit, de 10 em 10 graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O programa deve apresentar os valores das duas temperaturas.  Obs.:  Pesquise a f´ormula de convers˜ao.




#include <stdio.h>

int main(void) {

  float F, C, i;
  
  for( C = 10; C <= 100; C += 10){

     F = (C * 1.8) + 32;

    printf("\nTemperatura em  °C: %.2f\n", C);
    printf("Temperatura em  Fahrenheit: %.2f\n", F);
    
  }
  
  return 0;
}