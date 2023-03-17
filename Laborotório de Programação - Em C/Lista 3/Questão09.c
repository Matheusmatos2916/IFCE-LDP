#include <stdio.h>


#define N 3

int main(void) {
  int M[N][N];

   for (int i= 0; i < N; i++){
     for(int j = 0; j < N; j++){
       printf("Valores da linha %d de %d:", i+1, N);
       scanf("%d", &M[i][j]);
     }
     }

    printf("\nValores inseridos\n");   
    for (int i=0; i < N; i++){
     for(int j = 0; j < N; j++){

       printf("[%d] ", M[i][j]);
     }
   puts("\n");
  }

  printf("\nValores da diagonal principal\n");   
  for (int i = 0; i < N; i++){
     for(int j = 0; j < N; j++){

       if(i == j){
         
         printf("%d ",M[i][j]);
         
         }
       }
  }
  
  puts("\n");   

  return 0;
}