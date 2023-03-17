//Modifique o programa anterior adicionando um campo z com a media aritmetica de (x, y). A media deve ser calculada por uma funcao e a estrutura passada por referencia. O tipo de retorno dessa funcao deve ser void.



#include <stdio.h>
#include <stdlib.h>


typedef struct {
  int X;
  int Y;
  float Z;
}node;


int main(void) {

  node *P_struct;

  P_struct = malloc(sizeof(node));



  P_struct->X = 142;
  P_struct->Y = 115;
  P_struct->Z = (float)(P_struct->X + P_struct->Y)/2;



  printf("\nCampo X: %d // Campo Y: %d\n", P_struct->X, P_struct->Y);
  printf("Média: %.2f\n", P_struct->Z);

  
  return 0;
}

