//Escreva um programa em C que binarize os elementos da matriz M gerada aleatoriamente e com dimens ̃oes obtidas em tempo de execu ̧c ̃ao. A partir de um limiar t dado, crie a matriz S da seguinte forma: Si,j = ( 1 se Mi,j > t 0 caso contr ́ario

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



void Num_binario(int *PM, int *PB, int *inter){

  for (int i = 0; i < (*inter * *(inter +1)); i++){
      if(*(PM + i) > *(inter + 4)) {
        *(PB + i) = 1;

}
    }
  }



int main(int argc, char *argv[]){

 int *PM, *PS, V_teste[5], op;

 op = 1;


	srand(time(NULL));  

  do {

    *(V_teste + (op -1)) = atoi(*(argv) + op);
		op++;
  }while( op < argc);

	if (*(V_teste + 2) > *(V_teste + 3)){
		
    op = *(V_teste + 2);
		*(V_teste + 2) = *(V_teste + 3);
		*(V_teste + 3) = op;
    
	} else if ((*V_teste <= 0) || (*(V_teste+1) <=0)){
    
    puts("Utilização incorreta, as dimensões da matriz não podem ser nulas.\n");
    puts("Ex: Linhas colunas intervalo_inicial intervalo_final limiar\n");
    exit(2);
  } else if ((*V_teste <= 0) || (*(V_teste+1) <=0)){
    
    puts("Utilização incorreta, as dimensões da matriz não podem ser nulas.\n");
    puts("Ex: Linhas colunas intervalo_inicial intervalo_final limiar\n");
    exit(2);
  } else if ((*(V_teste + 2) > *(V_teste + 4)) || (*(V_teste + 3) < *(V_teste + 4))){
    
    puts("Utilização incorreta, as dimensões da matriz não podem ser nulas.\n");
    puts("Ex: Linhas colunas intervalo_inicial intervalo_final limiar\n");
    exit(3);
  }

   PM = malloc((*V_teste * *(V_teste  + 1)) * sizeof(int));
	 PS = calloc((*V_teste * *(V_teste + 1)), sizeof(int));

  if(!PM || !PS){

   	puts("Não foi possível alocar a memória\n");
		exit(4);
    
  }

   Aleatorio(PM, V_teste);
   Num_binario(PM, PS, V_teste);

  puts("Matriz (Original):");
  Matriz(PM, V_teste);

  puts("Matriz (Binária):");
	Matriz(PM, V_teste);

  free(PM);
	free(PS);

  	
	return EXIT_SUCCESS;
  
}