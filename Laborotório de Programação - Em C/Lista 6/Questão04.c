/* Escreva um programa em C que modifique a Quest ̃ao 1 para conter um array com 3 alunos. Escreva uma fun ̧c ̃ao para calcular a m ́edia dos alunos.
  */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define TAM 2
#define TOTAL_ALUNOS 3


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


struct ficha{

   int vn[TAM];
   float media;

};



int main(){

    struct aluno *pa;
  
    pa = malloc(TOTAL_ALUNOS * sizeof(struct ficha));


    for(int i = 0; i < TOTAL_ALUNOS; i++){
      
       vetor_aleatorio(((pa+i)->vn), TAM, 10);
      
    }   

     for(int j = 0; j < TOTAL_ALUNOS; j++){

       printf("Aluno %d\n", j+1);
       printf("1°Nota é: %d\n", (pa+j)->vn[0]);
       printf("2°Nota é: %d\n", (pa+j)->vn[1]);
       puts("\n");
      
    }
   
    for(int k = 0; k < TOTAL_ALUNOS; k++){
      
       (pa+k)->media =  media((pa->vn), TAM);
       printf("Média do %d°aluno: %.2f\n", k+1, (pa+k)->media);    
      
    }

    return 0;
}