//Escreva um programa em C que utilize uma Estrutura aluno para conter duas notas, lidas do usuario, e sua m ́edia.


#include <stdio.h>


struct Aluno{
 float N1;
 float N2;
 float M;
};

int main(void) {
   struct Aluno A1;
   struct Aluno A2;
  

  printf("Insira 1°nota do aluno 1:");
  scanf("%f", &A1.N1);
  printf("Insira 1°nota do aluno 1:");
  scanf("%f", &A1.N2);

  A1.M = (A1.N1+A1.N2)/2;

  printf("Insira 1°nota do aluno 2:");
  scanf("%f", &A2.N1);
  printf("Insira 1°nota do aluno 2:");
  scanf("%f", &A2.N2);

   A2.M = (A2.N1+A2.N2)/2;

  printf("média do aluno 1: %.2f\n", A1.M );
  printf("média do aluno 2: %.2f", A2.M );
  
  return 0;
}