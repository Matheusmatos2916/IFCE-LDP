//Escreva um programa que solicite iterativamente um n ́umero do usu ́ario e imprima sempre o menor valor fornecido. Crie um crit ́erio para finaliza ̧c ̃ao do programa. Utilize ponteiros.


#include <stdio.h>
#include <stdlib.h>


void Opcao(int *a){
 int aux = 0;

 puts("Insira um valor:");
 scanf("%d", (a + 0));
  
 aux = *(a+0);

 while(*(a+0) != 0){
 puts("Insira um valor:");
 scanf("%d", (a + 0));

 aux = (*(a+0)< aux)? *(a+0): aux;

  printf("O menor valor atualmente é: %d\n", aux);   
}
  }




int main(void) {

 int  *Ponteiro = NULL;
  
 Ponteiro = malloc(sizeof(int));
  
  Opcao(Ponteiro); 
  
  return 0;
}

