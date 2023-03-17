//Elabore um programa que calcule o somat ́orio de todos os n ́umeros pares pertencentes a faixa A,B especificada pelo usu ́ario. O programa deve funcionar tanto para A > B quanto para B > A.

#include <stdio.h>


int main(void) {
     int A, B, S = 0, i;
  

  printf("Insira o valor do ínicio do intervalo:");
  scanf("%d", &A);

  printf("Insira o valor do final do intervalo:");
  scanf("%d", &B);


  if (A > B){
  for(i = B; i <= A; i++){

    if(i % 2 == 0){

      printf("%d é par\n", i);
      S = S + i;
      
    }
    
  }
    
  printf("O valor do somário é: %d", S);      
    
} else if (B > A){
   for(i = A; i <= B; i++){

    if(i % 2 == 0){

      printf("%d é par\n", i);
      S = S + i;
      
    }
    
  }

    printf("O valor do somário é: %d", S);    
    
}
  



  return 0;
}