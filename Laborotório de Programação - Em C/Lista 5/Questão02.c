//Escreva um programa em C que informe o endereco do menor elemento de um vetor de inteiros gerado. A quantidade de elementos desse array deve ser fornecido por linha de comando.

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
	
  free(v);

    return 0;
}


