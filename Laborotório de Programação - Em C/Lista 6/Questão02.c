//Escreva um programa em C que utilize uma Estrutura estoque que cont ́em uma string com o nomePeca, um n ́umero inteiro para identificar o n ́umero da pe ̧ca, o pre ̧co em ponto flutuante e um elemento inteiro para identificar o n ́umero do pedido.


#include <stdio.h>
#include <stdlib.h>

#define TAM 100

struct estoque {

	    char nomePeca[TAM];
	    int total_pecas;
	    float preco;
	    int total_pedidos;

	  };   


int main(void) {

struct estoque E1; 

puts("insira o nome da peça:");
scanf("%s", &E1.nomePeca[TAM]);
puts("insira o total de peças:");  
scanf("%d", &E1.total_pecas);
puts("insira o preço de cada peça:");  
scanf("%f", &E1.preco);  
puts("insira o total de pedidos:");  
scanf("%d", &E1.total_pedidos);


puts("\n---Informações do estoque---\n");


  printf("nome da peça: %c\n", E1.nomePeca[TAM]);
  printf("total de peças: %d\n", E1.total_pecas);
  printf("o preço de cada peça: %.2f\n", E1.preco);
  printf("o total de pedidos: %d\n", E1.total_pedidos);
  

  
  return 0;
}