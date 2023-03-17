//Escreva um programa que receba a entrada de um n ́umero de trˆes d ́ıgitos, separe o n ́umero em seus d ́ıgitos componentes e reconstrua um n ́umero com os componentes na ordem inversa. Exemplo: para entrada de 123, a resposta do programa seria 321.


#include <stdio.h>

int main(void) {
  int  N, C;
  
  printf("Informe um número inteiro de 3 dígitos:");
  scanf("%d", &N);

  if( N >= 0){
    do{
      C = N % 10;
      printf("%d", C);
      N /= 10;
    } while (N != 0);
      printf("\n"); 
    } else if (N < 1){
        N = N * - 1;      
       printf("-");
    }

  
  return 0;
}