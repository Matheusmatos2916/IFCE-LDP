/* Escreva um programa que gere um vetor X com n ́umeros pseudoaleat ́orios no intervalo [0,N − 1].
Crie um vetor F com N posi ̧c ̃oes e armazene em cada posi ̧c ̃ao de F a quantidade de ocorrˆencias
dos elementos de X. Exemplo:
Para N = 7, temos:

X = [4, 6, 2, 3, 2, 3, 0, 2, 5, 5, 2, 6, 0, 5]

Portanto,

F = [2, 0, 4, 2, 1, 3, 2]

Observe que as ocorrˆencias dos elementos de X s ̃ao armazenadas em F nos  ́ındices de mesmo valor.

*/

#include <stdio.h>
#include <stdlib.h>



void Ocorrencias(const int *const VT, int *const VO, const int QV){
    for (int i = 0; i < QV; i++){
        ++*(VO + *( VT + i));
    }
}

void Imprimindo(const int *const V, const int TV){
    for (int i = 0; i < TV; i++){
      
        printf(" %d ", *(V + i));
      
    }
  
    printf("\n");
}

void  gerarvalores( int *const V, int TV, int inter){
    for(int i = 0; i < TV; i++){
        *(V+i) = rand() % inter;
    }
}


int main(){
    int VT, VO,  *PVT, *PVO;


    puts("Digite o total de elementos:");
    scanf("%d", &VT);

    puts("Digite o máximo de elementos:");
    scanf("%d", &VO);

    PVT = (int *) malloc (VT * sizeof(int));
    PVO = (int *) malloc (VO * sizeof(int)); 

    gerarvalores(PVT, VT, VO);

    Ocorrencias( PVT, PVO, VT);
    
    
    puts("\nImpressão - elementos: ");

    
    Imprimindo( PVT,  VT);


    puts("\nImpressão - Ocorrências: ");

    Imprimindo(PVO, VO);

    return 0;

}

