//Calcule o erro m ́edio quadr ́atico entre dois vetores A e B de dimens ̃ao N gerados aleatoriamente. Pesquise a equa ̧c ̃ao.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 10

float MSE(float *P1, float *P2, int T){
  
	float S, MSE;
  
	for (int i = 0; i < T; i++){
    
		S += pow(*(P1 + i) - *(P2 + i), 2);
    
		if (i == 0){

      puts("Soma Quadrática Acumulada:");
	  	printf("%.2f\t", S);
      
    } 
	}
	MSE = sqrt((float) S/T);
	return printf("\n O MSE é: %.2f", MSE);
}


int main (int argc, char *argv[]) {
	
  int TOTAL;
	float *Pv1, *Pv2;
  srand(time(NULL));
	
  
  TOTAL = atoi(*(argv + 1));
  Pv1 = malloc(TOTAL * sizeof(float));
  Pv2 = malloc(TOTAL * sizeof(float));
  

 for(int i = 0; i < TOTAL; i++){

  if (i == 0){
    
    printf("Insira o 1°vetor:");
    *(Pv1 + i) = ((rand()) % TAM) + (float)(rand() % TAM)/100;
    printf("1°vetor: %.2f\t", *(Pv1 + i));
    
  }
   
 }

  printf("\n");

 for(int i = 0; i < TOTAL; i++){

  if (i == 0){
    
    printf("Insira o 1°vetor:");
    *(Pv2 + i) = ((rand()) % TAM) + (float)(rand() % TAM)/100;
    printf("1°vetor: %.2f\t", *(Pv2 + i));
    
  }
   
 }

  printf("\n");  
  


  MSE(Pv1, Pv2, TOTAL);

  printf("\n"); 
	return (0);
}


