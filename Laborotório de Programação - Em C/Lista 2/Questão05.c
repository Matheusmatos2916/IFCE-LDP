//Fazer um programa que receba um valor n no teclado e determine o maior e o menor termo fornecido. A condicao de termino do programa  ́e quando o usu ́ario digitar zero.

#include <stdio.h>

int main(void) {
  int N, M = N;

  puts("Insira um número(inteiro):");
  scanf("%d", &N);
  
  while( N != 0){
      if( N > M)
        M = N;
    puts("Gostaria de encerrar?(Digite 0) se não digite outro valor:");
    scanf("%d", &N);
  }

   printf("O maior número digitado é: %d\n", M);
  
  return 0;
}




