/*Crie uma Estrutura disciplina em que um dos campos corresponde tambem a uma estrutura professor.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct disciplina{
  int Total_carga;
  int Total_turmas;
  int Quant_A;
  struct professor *PP;
};


struct professor{
  char vn[50];
  int ganho;
};



int main(){
    struct disciplina *d1;
    struct professor *professor;
  

    d1 = malloc(sizeof(struct disciplina));
    professor = malloc(sizeof(struct professor));

   printf("Insira o nome do professor:");
   scanf("%s", professor->vn);

   professor-> ganho = 9500;
 

    d1->Total_carga = 80;
    d1->Quant_A = 40;
    d1->Total_turmas = 1;
    d1-> PP = professor;

    
    printf("O professor %s recebe R$%d\n", d1->PP->vn, d1->PP->ganho);
    

    return 0;
}