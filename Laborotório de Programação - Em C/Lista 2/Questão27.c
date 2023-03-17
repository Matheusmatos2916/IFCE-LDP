//Escreva um programa que receba varios numeros inteiros (em uma estrutura de laco) e apresente o produto do maior pelo menor n ́umero apresentado. (Obs.: Nao utilize vetores.) A condi ̧cao de sa ́ıda do laco  ́e o usuario digitar um numero negativo e par.





#include <stdio.h>

int main(void) {
 int N, Maior = 0, Menor = 0, P = 0;

 do{
   
    printf("Insira número inteiro:");
    scanf("%d", &N);

   if( N > Maior){

     Maior = N;


     
   } else if(N > Menor) {

     if(N > 0){
    
       Menor = N;
       
    }
     
    
   
   }

   
   
   P = Maior * Menor;
   
   printf("O maior valor é: %d\n", Maior);
    printf("O menor valor é: %d\n", Menor); 
  
  
  }while( (N > 0) && (!N % 2 == 0));

    printf("\n--- Resultado final ---\n");
     printf("O maior valor é: %d\n", Maior);
     printf("O menor valor é: %d\n", Menor);
     printf("O produto do %d pelo %d é: %d\n",Maior, Menor, P);
    
  
    
  
  
  return 0;
}