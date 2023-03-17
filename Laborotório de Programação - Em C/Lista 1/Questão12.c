//Escreva um programa que pe ̧ca ao usu ́ario para digitar dois numeros, obtenha-os do usu ́ario e imprimaa soma, o produto, a diferen ̧ca, o quociente e o resto da divisao dos dois n ́umeros.




#include <stdio.h>

int main(void) {
 int N1,N2, A, S, M, D, R;

  printf("Insira o primeiro número:");
  scanf("%d", &N1);

  printf("Insira o segundo número:");
  scanf("%d", &N2);

  A = N1+N2;
  S = N1-N2;
  M = N1*N2;
  D = N1/N2;
  R = N1 % N2;

  printf("Resultado da adição é: %d\n", A);
  printf("Resultado da subtração é: %d\n", S);
  printf("Resultado da multiplicação é: %d\n", M);
  printf("Resultado  da divisão é: %d\n", D);
  printf("Resultado do resto divisao é: %d\n", R);
  

  
 
  return 0;
}