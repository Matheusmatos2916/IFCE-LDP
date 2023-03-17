/* Escreva um programa em C que gere um vetor com numeros aleatorios e calcule sua m ́edia. Organize uma Estrutura com as seguintes informacoes: ponteiro para a matriz, quantidade de elementos e a media.

  */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define INTER 100

void imprimir (const int *const V, const int QUANT){
   
  for(int i = 0; i < QUANT; i ++){
       
     printf("%d ", *(V+i));
    
    }
  
    printf("\n");
}

void vetor_aleatorio(int *const p, const int Quant, const int intervalo){
   
    srand(time(NULL));

    for(int i = 0; i < Quant; i++){
      
        *(p+i) = rand() % intervalo;
      
    }
} 

float media(const int *V, const int quant){
    
   float media = 0;
  
    for(int i = 0; i < quant; i++){
      
        media += *(V+i);
    }
  
    return media/quant;
}

struct estrutura_media {
    int *Pont_MV;
    int quant;
    float media;

};


int main(){
    int *vetorAleatorio;
    struct  estrutura_media E1;

    vetorAleatorio = calloc(TAM, sizeof(int));

    vetor_aleatorio(vetorAleatorio, TAM, INTER);


    E1.Pont_MV = vetorAleatorio;
    E1.quant = TAM;
    E1.media = media(vetorAleatorio, TAM);

    imprimir(E1.Pont_MV, TAM);

    printf("Média é: %.2f \n", E1.media);
    printf("endereço: %p\n", E1.Pont_MV);

    return 0;
}


