#include <stdio.h>

#define TAM_STR 100

int Contar(const char *const Tam){
    const char *Ponteiro_TAM = Tam;

    while(*++Ponteiro_TAM != '\0');

    return (int)( Ponteiro_TAM - Tam);
}


int main(void) {
  
  char Str[TAM_STR], *S;

   S = Str;
 
  
  printf("Digite 1°string:");
  scanf("%s", S);
  


	printf("O tamanho da string: %d\n",Contar(S));

  
  return 0;
}