//Escreva um programa que gere dois vetores (X e Y ) com n ́umeros pseudoaleat ́orios no intervalo [0,N − 1]. Crie uma matriz M com dimens ̃oes NxN que armazene as coocorrˆencias dos elementos de X e Y da seguinte forma: Por exemplo, para N = 7:


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 14

void gerar( int *const V, const int VT, const int inter){
    
    srand(time(NULL));
    
    for(int i = 0; i < VT; i++){
      
        *(V+i) = rand() % inter;
      
    }
}



void ocorrenciamatriz(const int *const lin, const int *const col, int *const  m, const int TV, const int TMC){
  
    int k = 0;
  
    for(int i = 0; i < TV; i++){
      
        k = *(lin + i)  * TMC + *(col+i);
      
        ++*(m+k);
      
    }
}

void imprimir(const int *const V, const int VT){
 
   printf("[");
  
    for (int i = 0; i < VT; i++) {
      
        printf("%d ", *(V+i));
      
    }
  
    printf("]\n");
}

void imprimir_matriz(const int *const im, int dim, int col){
  
    for(int i = 0; i < dim; i++){
            if(!(i)){
              
                printf("%d ", *(im + i));
              
                continue;
            }
              if ( !(i % col))
            {
                puts(" ");
            }
            printf("%d ", *(im + i));
    }
  puts("\n");
} 



int main(){
    int *lin, *col, *mo, t;


    puts("Digite a dimensão da N para a Matriz quadratica:");
    scanf("%d", &t);


    mo = (int *) calloc(t*t, sizeof(int));
    lin = (int *) calloc(TAM, sizeof(int));
    col  = (int *) calloc(TAM, sizeof(int));

  
    puts("\nElementos gerados de x para y:");
  

    gerar(lin, TAM , t - 1);
    gerar(col, TAM , t - 1);
    imprimir(lin, TAM);
    imprimir(col, TAM);
  
  


    puts("\nImpressão das ocorrência:");
  
    ocorrenciamatriz(lin, col, mo, TAM, t);

    imprimir_matriz(mo, t*t, t);


    return 0;
}

