//Escreva um programa que apresente o somat ́orio de todos os n ́umeros divis ́ıveis por 3 pertencentes ao intervalo [0,100] e o somat ́orio de todos os n ́umeros divis ́ıveis por 5 pertencentes ao intervalo ]100,200]. Obs.: Utilize apenas um la ̧co de repeti ̧c ̃ao.



#include <stdio.h>

int main(void) {



  printf("\n---- divisiveis por 3 de 0 a 100 ---- \n");
  
   for(int i = 0; i <= 100; i++){

    if(i % 3 == 0){

   printf("%d é dívisivel de 3\n", i);

  }
     }

     printf("\n---- divisiveis por 5 de 101 a 200 ---- \n");
  
   for(int i = 101; i <= 200; i++){

    if(i % 5 == 0){

   printf("%d é dívisivel de 5\n", i);


      }    
  }

  return 0;
}