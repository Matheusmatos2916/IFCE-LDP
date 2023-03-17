#include <stdio.h>

int main(void) {
  
  int N;

      printf("\nInsira a entrada (1-7):");
      scanf("%d", &N);
    
    do {
      switch (N){

        case 1:
          
           printf("Domingo\n");

           break;

        case 2:
          
           printf("Segunda\n");

           break;

        case 3:
          
           printf("Terça\n");

           break;

        case 4:
          
           printf("Quarta\n");

           break;

        case 5:
          
           printf("Quinta\n");

           break;

        case 6:
          
           printf("Sexta\n");

           break;

        case 7:
          
           printf("Sabádo\n");

           break;

        default:

          
          printf("Número de dia não válido! Insira um valor no intervalo!\n");
        
        }
         printf("\nInsira a entrada (1-7):");
      scanf("%d", &N);
      
      }while(N != 0) ;

     
      	
  
    return 0;
  }

