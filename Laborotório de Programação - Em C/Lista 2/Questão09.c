//A s ́erie de Fibonacci  ́e formada pela seguinte sequˆencia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55... etc. Escreva um algoritmo que gere a s ́erie de Fibonacci at ́e o vig ́esimo termo


#include <stdio.h>

int main(void) {
   int  Fibbo = 1, Num = 1, Aux = 0, limite = 10000;


  puts("--- Sequência de Finonnaci ---");
   

  while(Fibbo < limite){ 
    
    for ( int i = 1; i <= 20; i ++){
        printf("%d°-) = %d\n", i, Fibbo);  
        
        Fibbo = Fibbo + Aux;                 
        Aux = Num;
        Num = Fibbo;        
     }
    }
 printf("\n");
  return 0;
}


