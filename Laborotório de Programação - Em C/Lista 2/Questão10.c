// Elabore um programa que apresente os quadrados dos numeros inteiros multiplos de 4 existentes na faixa de valores de 15 a 90

#include <stdio.h>
#include <math.h>



int main(void) {

 int A, P;
  
  for( A = 15; A <= 90; A++){
     if (A % 4 == 0)  {
      P = pow(A, 2);
       printf("múltiplo 4 é %d e sua potência é %d\n", A, P);
  }
    }

  return 0;
}
  