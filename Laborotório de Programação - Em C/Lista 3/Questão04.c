//4. Faca um programa em C que leia duas strings do usuario e informe se elas sao iguais. Faca uma versao com o uso da funcao strcmp() e outra sem.

#include <stdio.h>
#include <string.h>

#define L 100

 int Verificar(char str1[L], char str2[L]){
   int count = 0;

  while(str1[count] == str2[count] && str1[count] !='\0' && str2[count] !='0'){
      ++count;
    }

  if(str1[count] == '\0' && str2[count] == '\0'){
        return 1;
  } else{
        return 0;
    
  }
}



int main(void) {

char V1[L], V2[L];
int Comparar; 
  
  
  printf("Informe a primeira string:");
  scanf("%s", V1);
  

  printf("Informe a segunda string:");
  scanf("%s", V2);


 printf("\nMetódo - strcmp\n");
  
  Comparar = strcmp(V1, V2);


  if(Comparar == 0){

    printf("\nAs strings são iguais\n");

    printf("primeira string: %s\n", V1);

     printf("Segunda string: %s\n", V2);
    
    printf("\n");
    
    
  } else {

     printf("\nAs strings são diferentes\n");

     printf("primeira string: %s\n", V1);

     printf("Segunda string: %s\n", V2);

     printf("\n");
  }
  
  printf("\nMetódo - sem strcmp\n");


   if(Verificar(V1, V2)){

         printf("\nAs strings são iguais\n");

         printf("primeira string: %s\n", V1);

         printf("Segunda string: %s\n", V2);
    
         printf("\n");
       
   } else {

          printf("\nAs strings são diferentes\n");

          printf("primeira string: %s\n", V1);

          printf("Segunda string: %s\n", V2);

          printf("\n");

     
   }
  






  
  return 0;
}