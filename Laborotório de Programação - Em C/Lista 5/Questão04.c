//Escreva um programa que dado um vetor X de inteiros, realize a seguinte normalizac ̃ao dos dados (min-max):



#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#define N 100

int main (int argc, char *argv[]){

  int Tam, *Voriginal = NULL, op;
  float *VNormaliza = NULL;

  srand(time(NULL));
	Tam = atoi(argv[1]);

  Voriginal = malloc(Tam * sizeof(int));
  VNormaliza = malloc(Tam * sizeof(float));
  



	for (int k = 0; k < Tam; k++) *(Voriginal + k) = rand() % N;
	for(int i = 0; i < Tam -1; i++)
		for(int j = Tam - 1; j > i; j--)
			if (*(Voriginal + j) < *(Voriginal +j - 1)){
				op = *(Voriginal + j);
				*(Voriginal + j) = *(Voriginal + j - 1);
				*(Voriginal + j - 1) = op;
			}

	puts("\nVetor Original:");
	for (int k = 0; k < Tam; k++){

   printf("%d\t", *(Voriginal + k));

    
  }


	puts("\nVetor Normalizado:");
	for (int k = 0; k < Tam; k++){
		*(VNormaliza + k) = (float)(*(Voriginal + k) - *(Voriginal))/(*(Voriginal + Tam - 1) - *(Voriginal));
		printf("%.2f\t", *(VNormaliza  + k));
	}
	puts("");

	free(Voriginal);
	free(VNormaliza);
	
	return (0);
}