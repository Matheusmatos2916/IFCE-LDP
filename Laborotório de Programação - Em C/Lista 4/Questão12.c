/*
  Reimplemente a quest ̃ao considerando que o vetor Y  ́e dado em fun ̧c ̃ao de X da seguinte forma:


        xi    if  0< r ≤ 3
yi=     xi − 1 if   3 <  r  ≤ 5
        xi + 1 if  5  < r ≤ 7
        xi − 2   if  8 < r ≤ 9
        xi + 2    if  9 < r ≤ 10

Onde r  ́e um n ́umero pseudoaleat ́orio, xi e yi correspondem ao i-esimo elemento do vetor X e Y , respectivamente. Considere os valores limites definidos na quest ̃ao anterior para yi, caso o valor obtido a partir de xi esteja fora da faixa.
*/





#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define TAM 10
#define INTER 10



void gerar(int *const V, const int VT, const int inter){
  
  srand(time(NULL));
  
    for(int i = 0; i < VT; i++){
      
        *(V+i) = rand() % inter;
      
    }
}

void gerarv( int *const VY,const int *const VX , const int VT){
    
   int v[10] = {0, 0, 0, -1, -1, 1, 1, -2, -2, 2};
  
    int *vPtr;
  
     vPtr = v;
  
    for(int i = 0; i < VT; i++){
      
        *(VY+i) = *(VX+i) +  *(vPtr + i);
      
    }
}

void OcorrenciaM(const int *const lin, const int *const col, int *const mo, const int TamV, const int Tamv2){
  
    int k = 0;
  
    for(int i = 0; i < TamV; i++){
      
        k = *(lin + i)  * TamV + *(col+i);
      
        ++*(mo+k);
    }
}

void imprimindoVetores(const int *const V, const int VT){
   
    printf("[ ");
  
    for (int i = 0; i < VT; i++) {
      
        printf("%d ", *(V+i));
      
    }
    printf("]\n");
}


void imprimirMatriz(const int *const m, int dimen, int col){
    for(int i = 0; i < dimen; i++){
      
            if(!(i)){
              
                printf("%d ", *(m + i));
              
                continue;
              
            }
              if ( !(i % col)){
                puts(" ");
            }
            printf("%d ", *(m + i));

          
            
    }
}




int main(){
    int *lin, *col, *mo;
      
    mo = (int *) calloc(INTER * INTER, sizeof(int));
    lin = (int *) calloc(TAM, sizeof(int));
    col  = (int *) calloc(TAM, sizeof(int));

    puts("\n");
    gerar(lin, TAM, INTER);
    gerarv(col, lin, TAM);

    imprimindoVetores( lin, TAM);
    imprimindoVetores( col, TAM);

    puts("\nImpressão das Ocorrências:\n");
  

    OcorrenciaM(lin, col, mo, TAM, INTER); 

    imprimirMatriz(mo, INTER * INTER, INTER);
    

    return 0;
}

