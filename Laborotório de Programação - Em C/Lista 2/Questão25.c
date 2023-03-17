// Calcule o valor de π  a partir da s´erie infinita mprima uma tabela que mostre o valor de π  aproximado por um termo dessa s´erie, e depois por dois termos, trˆes termos, e assim por diante.





#include <stdio.h>
#include <math.h>

int main(void) {
  float Pi;
   int Lim;


  printf("Insira um limite para a série:");
  scanf("%d", &Lim);

  for ( int i = 0; i < Lim; i++){

   Pi += pow(-1, i)/ (2*i + 1);

   printf("%d-) Pi = %f\n", i+1,  Pi*4);

  }

 

  
  return 0;
}