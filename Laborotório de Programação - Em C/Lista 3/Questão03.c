//Faca um programa em C que leia uma string do usuario e informe a quantidade de caracteres da string fornecida. Nao use a funcao strlen().




#define N 100



#include <stdio.h>

int main(void) {

   char  V[N];
   int Count = 0;

  

  printf("Informe uma palavra: ");
  scanf("%s",V);


   while(V[Count] != '\0'){
     Count ++;
     
   }
  
  printf("A quantidade de caracteres na string é: %d\n", Count);
  return 0;
}