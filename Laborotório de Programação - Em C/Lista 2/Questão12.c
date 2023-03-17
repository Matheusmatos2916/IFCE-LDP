#include <stdio.h>

int main(void) {
  int Num, M;

  printf("Digite um valor para verificar sua tabuada:");
  scanf("%d", &Num); 


   printf("\n----- Tabuada do %d -----\n", Num);
  
  for(int i = 1; i <=10; i++){

    M = Num*i;

    printf("%d * %d = %d\n", Num, i, M);
    
  }


  
  return 0;
}