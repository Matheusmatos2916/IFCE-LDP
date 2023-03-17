//Escreva um programa que receba dois valores numericos X e Y (unsigned char ) e esconda todos os bits de X em cada um dos bits menos significativos dos 4 elementos imediatamente anteriores e posteriores a Y. (Obs.:  Nao utilizar valores para Y menores que 5).

#include <stdio.h>




#define  elemento 4


int main(){
  
  unsigned char X = 255, Y = 128, Auxiliar, anteriores, posteriores;

  for (int i = 1; i <= elemento; i++){


     anteriores = Y - i;
     printf("Anteriores Y - %d: %u\n", i, anteriores);
     Auxiliar = 1 << (4 - i);
     Auxiliar = Auxiliar & X;
     Auxiliar = Auxiliar >> (4 - i);
     anteriores = anteriores & (~1);
     anteriores = anteriores | Auxiliar;
     printf("Anteriores Y - %d --bit %d--: %u\n", i, 5 - i, anteriores);
     posteriores = Y + i;
     printf("Sucessor Y + %d: %u\n", i, posteriores);
     Auxiliar = 1 << (3 +i);
     Auxiliar = Auxiliar & X;
     Auxiliar = Auxiliar >> (3 + i);
     posteriores = posteriores & (~1); 
     posteriores = posteriores | Auxiliar;
    
     printf("Sucessor Y + %d --bit %d--: %u\n", i, 4 + i, posteriores);
    
    
  }
  
  printf("Finalizado com sucesso\n");
  
  return (0);
}











