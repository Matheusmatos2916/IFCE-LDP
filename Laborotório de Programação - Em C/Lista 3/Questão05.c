//Faca um programa em C que concatene duas strings recebidas pelo usúario. Construa uma versao com uso da funcao strcat() e outra sem.


#define LIM 100
#define LIM2 200

#include <stdio.h>
#include <string.h>

int main(void) {

  char V1[LIM], V2[LIM2];
  
  printf("Informe a primeira string:");
  scanf("%s", V1);
  

  printf("Informe a segunda string:");
  scanf("%s", V2);

  printf("\nMetódo - sem strcat\n");

  printf("Cocatenação da string 1 com a string 2:%s%s\n", V1, V2);

  printf("\nMetódo - strcat\n");
  strcat(V1, V2);
  printf("Cocatenação da string 1 com a string 2:%s\n", V1);


  

  return 0;
}