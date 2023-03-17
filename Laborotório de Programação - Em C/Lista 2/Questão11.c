//Refaca a questao 10, considerando que os limites da faixa (A e B) sejam fornecidos pelo usu ́ario. O programa deve funcionar tanto para A > B quanto para B > A.

#include <stdio.h>
#include <math.h>

int main(void) {

 int A, B, P;

 printf("Insira o primeiro valor:");
 scanf("%d", &A);

printf("Insira o segundo valor:");
 scanf("%d", &B);

  if( A > B){
  
  for( int i = A ; i >= B; i--){
     if (i % 4 == 0)  {
      P = pow(i, 2);
       printf("múltiplo 4 é %d e sua potência é %d\n", i, P);
  }
    }
  }
  
 if (B > A){

   for(int i = B ; i >= A; i--){
     if (i % 4 == 0)  {
      P = pow(i, 2);
       printf("múltiplo 4 é %d e sua potência é %d\n", i, P);
  }
    }
  }

   
 


  
  return 0;
}
  