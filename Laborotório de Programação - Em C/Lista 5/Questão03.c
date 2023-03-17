/* Modifique a quest ̃ao anterior criando uma fun ̧c ̃ao que armazena em um vetor os endere ̧cos do menor e do maior elemento do vetor. */  


#include<stdio.h>
#include <stdlib.h>
#include <time.h>




#define N 100


int main(int argc, char *argv[]) {

   
  int Tam, *v = NULL, ut;
  Tam = atoi(argv[1]);

  v = malloc(Tam * sizeof(int));
  srand(time(NULL));


  for (int i=0; i < Tam; i++) {
    
   *(v + i) = rand() % N;
    
  }

  
 for (int i = 0; i < Tam - 1; i++)
		for (int j = Tam - 1; j > i; j--)
			if (*(v + j) < *(v + j - 1)){
				ut = *(v + j);
				*(v + j) = *(v + j - 1);
				*(v + j - 1) = ut;
        }
      


  for (int k = 0; k < Tam; k++){
  
   printf("%d\t", *(v + k));
	

  }  
  
	printf("Menor: %d - Endereço: %p\n", *v, v);
  printf("Maior: %d - Endereço: %p\n", *(v + Tam - 1), v + Tam - 1);
	
  free(v);

    return 0;
}


