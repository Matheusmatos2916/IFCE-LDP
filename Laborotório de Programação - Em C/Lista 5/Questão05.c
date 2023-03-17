/*Escreva um programa que some todos os elementos de um vetor de float alocado dinamicamente. A quantidade de elementos devem ser fornecidas por linha de comando. Utilize a fun ̧c ̃ao rand() para alimentar o vetor com valores pseudo-aleat ́orios.
*/




#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define  N 1000

int main (int argc, char *argv[]) {
	int Tam;
	float *Total_Vetor = NULL, S = 0;

	Tam = atoi(*(argv + 1));

  
	Total_Vetor = malloc(Tam * sizeof(float));

  

  puts("\n");
	srand(time(NULL));
  
	for (int k = 0; k < Tam; k++){
		*(Total_Vetor + k) = (rand() % N) + (float)(rand() % N)/N;
		printf("%.2f\t", *(Total_Vetor + k));
		S += *(Total_Vetor + k);
	}

	printf("\nSoma: %.2f\n", S);

	free(Total_Vetor);
	return (0);
}