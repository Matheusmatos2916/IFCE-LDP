//Elabore um programa que apresente a quantidade de numeros divisıveis por 3 pertencentes a faixa A,B especificada pelo usu ́ario. O programa deve funcionar tanto para A > B quanto para B > A.


#include <stdio.h>

int main(void) {

  int A, B, i;

  printf("Insira o valor do ínicio do intervalo:");
  scanf("%d", &A);

  printf("Insira o valor do final do intervalo:");
  scanf("%d", &B);


  if (A > B){
  for(i = B; i <= A; i++){

    if(i % 3 == 0){

  printf("%d e divisivel por 3\n", i);

      
    }
    
  }
    

} else if (B > A){
   for(i = A; i <= B; i++){

    if(i % 3 == 0){

    printf("%d e divisivel por 3\n", i);
      
    }
    
  }
  

  
   
  return 0;
}
  
  }




