//Elaborar um programa que apresente os resultados das potˆencias do valor de base 3, elevado a um expoente que varie do valor 0 a 7


#include <stdio.h>
#include <math.h>


int main(void) {
  int N, P;
   
  for (int I = 0; I <= 7; I++){
    P = (pow(I,3));
    printf("O valor da potência de %d por 3: %d\n", I, P);
  }
  


  
  return 0;
}