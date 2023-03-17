/* Escreva um programa que gere dois vetores (X e Y ) com n ́umeros pseudoaleat ́orios no intervalo [0,N − 1]. Crie uma matriz M com dimens ̃oes NxN que armazene as coocorrˆencias dos elementos de X e Y da seguinte forma:
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ocorrencia (int *px, int *py, int total, int n1, int n2){

 for(int i = 0; i < n1; i++){
   
   (*(total + (n2 * *(px + i)) + *(py  + i)))++;
}

  }

int diagonais (int *M, int d){
   int DP1 = 0, DP2 = 0;
 
  for(int i = 0; i < d*d; i+= (d+1)){
    	DP1 += *(M + i);
  }

    for(int i = 0; i < d*d; i+= (d+1)){
    	DP2 += *(M + i);
  }

  printf("Soma diagoanal principal: %d, diagonal secundária: %d\n", DP1, DP2);
	return 0;

}


int main () {
	int *Pvx, *Pvy, *PM;
	int Tam, inter;

	puts("Qual tamanho dos vetores X e Y?");
	scanf("%d", &Tam);

	Pvx = malloc(Tam * sizeof (int));


  
	if (!Pvx) {
		puts("Falha na memória\n");
		exit(1);
	}
	
	Pvy = malloc(Tam * sizeof (int));
	if (!Pvy) {
		puts("Falha na memória\n");
		exit(1);
	}

	puts("Informe o N do intervalo?");
	scanf("%d", &inter);
	
	srand (time (NULL));
  
	for (int k = 0; k < Tam; k++) {
		*(Pvx + k) = rand () % inter;
		*(Pvy + k) = rand () % inter;
	}

	 PM = calloc((inter * inter), sizeof(int));
  
	if (!PM) {
		puts("Falha na memória");
		exit(1);
	}

	ocorrencia (Pvx, Pvy, PM, Tam, inter);

		
	printf("Elementos de X:");
	for (int k = 0; k < Tam; k++){


  		if (k != Tam - 1) {
      
        printf("%d, ", *(Pvx + k));
        
        } else {

        printf("%d", *(Pvx + k));
        
        } 
  }


  

printf("Elementos de Y:");

	for (int k = 0; k < Tam; k++){

  		if (k != Tam-1){


       printf("%d, ", *(Pvy + k)); 
        
      } 

      		else{

      printf("%d", *(Pvy+ k));
            
          }
  }
  

  printf("Elementos de M:\n");

	for (int k = 0; k < (inter * inter); k++) {
		if ((k != 0) && ((k % inter) == 0)) {

          
    printf("\n");
		printf("%d\t", *(PM + k));
  
    }
	}
	printf("\n");

	diagonais (PM, inter);
	free(Pvx);
	free(Pvy);
	free(PM);
	
	return 0;
}

