//Faca um programa em C que leia uma string do usuario e a apresente na forma inversa.



#include <stdio.h>


#define N 100

void Troca(char * I, char * F){
   char Inter;

   Inter = * I;
   * I = * F;
   * F =  Inter;
  
}

char *Inverter( char *str){
   char * Iniciar, * Finalizar;
   
   Iniciar = Finalizar = str;

 while (* Finalizar) {
   
   Finalizar ++;
   
 }

  for (Finalizar --; Iniciar <= Finalizar;  Iniciar++, Finalizar --){
   
      Troca(Iniciar, Finalizar);
  }
  return str;
}


int main(void) {
  char S[N];

  printf("Insira a primeira string:");
  scanf("%s", S);

  printf("String: %s\n", S);  
  printf("String invertida: %s\n", Inverter(S));
  return 0;
}