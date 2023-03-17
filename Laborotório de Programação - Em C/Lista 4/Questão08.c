// Escreva um programa que busque um caracter fornecido em uma string utizando ponteiros




#define TAM 100

#include <stdio.h>
#include <string.h>


int main(void) {
   char  str1[TAM], C, *p_str1, *p_C;

    p_str1 = str1;
    p_C = &C;


   printf("Digite 1°string:");
   scanf("%s", p_str1);

  printf("A palavra informada foi: %s\n",p_str1);

  
  int Tamanho = strlen(p_str1); 

  printf("\nInsira um caractere:");
  scanf(" %c", p_C);

  printf("o caractere informado foi: %c\n", C);
  

    printf("---- Resultado ----\n");
  
    for(int i = 0 ; i < Tamanho; i++){
       
      printf("%c" , *(p_str1 + i));

     
      
      }

    printf("\n");

   
    for(int i = 0 ; i < Tamanho; i++){
       

    if(*(p_str1 + i) == C ){


      printf("%c",*(p_str1 + i));
      printf("\nO caractere %c foi encontrado na posição %d\n",  C, i+1);
        
      } 
      
      }
  

    return 0;



}
