//Fa¸ca um programa em C que gere um vetor com 100 nu´meros inteiros pseudoaleat´orios no intervalo definido pelo usu´ario e apresente esse vetor ordenado (crescente).  Fa¸ca uma vers˜ao com o m´etodo de ordena¸c˜ao por sele¸c˜ao e outra pelo m´etodo bolha (bubble sort).




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100


void selecao(int V[],int n){

    int Menor, aux;

    for(int i=0;i<n-1;i++){
        Menor=i;
        for(int j=i+1 ; j<n ; j++){
            if(V[Menor] > V[j]){
          
                Menor=j;
              }
        }
        if(i!=Menor){
            aux = V[i];
            V[i] = V[Menor];
            V[Menor] = aux;
        }
    }
}

void Bolha(int *V, int n){

int i, C, aux, Final = N;

do {
     C = 0;
  
 for( i = 0; i < Final-1; i++){
   if(V[i] > V[ i+1]){
        aux = V[i];
        V[i] = V[i+1];
        V[i+1] = aux;
        C = i;
   }  
 }
  Final--;
 } while( C != 0);  
}



int main(void) {

int V1[N], Inicial, Final;
 

srand(time(NULL));

printf("Insira o valor inicial do intervalo:");
scanf("%d", &Inicial);

printf("Insira o valor final do intervalo:");
scanf("%d", &Final);  



for(int i = 0; i < N; i++){
 
   V1[i] = Inicial + rand() % Final;
 
  }

  
 printf("\nValores gerados\n");   
    for (int i=0; i < N; i++){
       printf("%d ",  V1[i]);

  }
  puts("\n");

 printf("Método de ordenação seleção\n"); 

 selecao(V1,N); 

for (int i=0; i < N; i++){
       printf("%d ",  V1[i]);

  }

printf("\n");  
printf("\nMétodo de ordenação bolha\n");  
  
Bolha(V1, N);

for (int i=0; i < N; i++){
       printf("%d ",  V1[i]);

  }  

 printf("\n");  
  return 0;
}