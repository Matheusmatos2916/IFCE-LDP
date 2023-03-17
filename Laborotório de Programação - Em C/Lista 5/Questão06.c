//Escreva um programa em C que apresente a m ́edia, a mediana e a moda de um vetor de inteiros gerados aleatoriamente em tempo de execu ̧c ̃ao.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define N  100

void Ordenacao(int *PV, int Total){
	int op;
  
	for (int i = 0; i < Total - 1; i++){
		for (int j = Total - 1; j > i; j--){
			if (*(PV +j) < *(PV + j - 1)){
        
				op = *(PV +j);
				*(PV +j) = *(PV + j - 1);
				*(PV + j - 1) = op;
        
			 }
      }
    }
}

float Media(int *PV, int Total){
	int S = 0;
  float M;
  
	for (int i = 0; i < Total; i++){

    S += *(PV + i);
    
  } 
  
   M =  (float)S/Total;
  
	return printf("A média é: %.2f\n", M);
}


float Mediana(int *PV, int Total){
  
  float mediana;
  
	if (Total % 2){

    mediana = (float)*(PV + (Total/2));
    
    return printf("A mediana é: %.0f\n", mediana);
  }  else {
    
    mediana = ((float)*(PV + (Total/2 - 1)) + *(PV + (Total/2)))/2;
    return printf("A mediana é: %.2f\n", mediana);
}

}


int Moda(int *PV, int Total){
	int *PM, Prox, qtd, moda, modaf, qtdf;
  
	PM = calloc(TAM, sizeof(int));

  Ordenacao(PM, Total);

	for (int i = 0; i < Total; i++){
    ++*(PM + *(PV + i));
 
  } 
  
	Prox = *PM;
  
	qtd = 0;
  qtdf= 0;
  
	for (int i = 0; i < TAM; i++){
      if (i == 0){
        qtd ++; 
        moda = *(PV+i);
      } else if(*(PV+i) == moda){
        qtd ++;
        
      } else if(qtd > qtdf) {
        
        modaf = moda;
        qtdf = qtd;
        qtd = 1;
        moda = *(PM+i);
        
      } else {
        
        qtd = 1;
        moda = *(PM+i);
        
      }
      
    }
	
  return printf("A moda é: %d\n", modaf); 
}




int main() {
  
  int *V = NULL;
  V = malloc(TAM * sizeof(int));

  srand(time(NULL));


  printf("\nVetor gerado: ");
  
	for (int i = 0; i < TAM; i++) {
    

   *(V + i) = (rand() % N);
    printf("%d\t", *(V + i));
    
    }

  Ordenacao(V, TAM);


  printf("\nVetor ordenado: ");

  for (int i = 0; i < TAM; i++) {
    
    printf("%d\t", *(V + i));
    
    }

  printf("\n");

  Media(V, TAM);

  Mediana(V, TAM);

  Moda(V, TAM);  

  
  return 0;
}

/*

   não armazena
|-----------------| 
0 1 2 3 4 5 6 7 8 9

*/