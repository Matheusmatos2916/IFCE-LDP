//Faca  um  programa  em  C  que  leia  uma  string  e  um  caractere do  usuario  e  informe  se  a  string  de entrada contem o caracter fornecido.


#define String 100

#include <stdio.h>
#include <string.h>


int main(void) {
   char  V[String], C;

  

  printf("Informe uma palavra: ");
  scanf("%s",V);

  int Tamanho = strlen(V); 

  printf("A palavra informada foi: %s\n", V);

  printf("\nInsira um caractere:");
  scanf(" %c", &C);

  printf("o caractere informado foi: %c\n", C);
  

    printf("---- Resultado ----\n");
  
    for(int i = 0 ; i < Tamanho; i++){
       
      printf("%c" ,V[i]);

     
      
      }

    printf("\n");

   
    for(int i = 0 ; i < Tamanho; i++){
       

    if(C == V[i]){
   
      printf("\nO caractere %c foi encontrado na posição %d\n", C, i);
        
      } 
      
      }
  

    return 0;



}



  



