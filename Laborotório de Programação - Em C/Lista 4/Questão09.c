//Implemente o m ́etodo de ordena ̧c ̃ao bolha utilizando ponteiros.

#include<stdio.h>
#include<stdlib.h>

int main()
{
  
   int *ponteiro, Limite, i, j, aux;


      printf("\nTotal de números? ");
      scanf("%d", &Limite);
  
      ponteiro = (int*)calloc(Limite, sizeof(int));

      for (i = 0; i < Limite; i++) {
        
         printf("%d de %d: ", i+1, Limite);
         scanf("%d", (ponteiro+i));
        
      }

      for (i = 0; i < Limite-1; i++){
        for (j = i+1; j < Limite; j++){
          
            if (ponteiro[i] > ponteiro[j]){

               aux = ponteiro[i];
               ponteiro[i] = ponteiro[j];
               ponteiro[j] = aux;
              
             } 
         } 
       } 

       printf("Ordenação: ");
  
       for (i = 0; i < Limite; i++){
         
          printf("%d ", ponteiro[i]);
         
       }

       printf("\n");

  

  return 0;
}

1 2 3
4 5 6
6 9 8   