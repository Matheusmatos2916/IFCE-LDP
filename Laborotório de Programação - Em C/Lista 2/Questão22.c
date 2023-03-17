// Escreva um programa que leia um numero inteiro e determine e imprima quantos dıgitos no inteiro sao algarismos 7.


#include <stdio.h>
#include <string.h>


int main() {
  int N, cont_7 = 0;
 char Separador[100];

  printf("insira um valor:");
  scanf("%d", &N);

  sprintf(Separador,"%d", N);

for( int i=0; i<strlen(Separador); ++i){
   
  printf("%c ",Separador[i]);

  if(Separador[i] == '7'){

    cont_7 ++;
    printf(" O número inserido tem %d digítos 7\n", cont_7);
  }    
  }


  
  return 0;
  }