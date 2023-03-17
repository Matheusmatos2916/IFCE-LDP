/* Escreva um programa em C que informe se o somat ́orio da diagonal principal de matriz N x N gerada  ́e par ou  ́ımpar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Matriz(int *PM, int *d){
 for (int i = 0; i < (*d * *(d+1)); i++){
      printf("%d\t", *(PM + i));

     if(i % (*(d + 1)) == (*(d + 1) -1)){
       printf("\n");
      
     }
 }
  }
  
void Aleatorio(int *PM, int *inter){

  for (int i = 0; i < (*inter * *(inter +1)); i ++){

    *(PM + i) = *(inter + 2) + (rand() % (*(inter +3) + 1));
    
  }
}


int diagonal_principal(int *PM, int *d){
   int op = 0;

   for(int i = 0; i < (*d * *d); i+= *d +1){
 
       op += *(PM + i);
   }
  	return op;
}
  


int main(int argc, char *argv[]){
  
	int V_teste[3], *PM, op;
  srand(time(NULL));

  if (argc != 3){

    puts("Utilização incorreta, as dimensões da matriz não podem ser nulas.\n");
    puts("Ex: Linhas colunas intervalo_inicial intervalo_final limiar\n");
    exit(1);
    
  }


	op = 1;


 do {

    *(V_teste + (op -1)) = atoi(*(argv) + op);
		op++;
   
  }while( op < 3);

  

 if((*V_teste <= 0) || (*(V_teste + 1) <= 0) || (*V_teste != *(V_teste +1))){

   puts("Utilização incorreta, as dimensões da matriz não podem ser nulas.\n");
   puts("Ex: Linhas colunas intervalo_inicial intervalo_final limiar\n");
   exit(2);
 }


  PM = malloc((*V_teste * *V_teste) * sizeof(int));

	if (!PM){
		puts("Não foi possível alocar a memória\n");
		exit(3);
	}




	Aleatorio(PM, V_teste);

	*(V_teste + 2) =  diagonal_principal(PM, V_teste);

	puts("Matriz(Original):");
	Matriz(PM, V_teste);

	puts("Somatório:");
  
	printf("%d\n", *(V_teste + 2));

  if (!((*(V_teste + 2) % 2))){

   puts("Par\n");
  
  } else {
    
    puts("Impar\n");

    }


	puts("\n");
	free(PM);
	
	return EXIT_SUCCESS;
}
  