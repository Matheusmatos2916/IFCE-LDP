//Escreva um programa que copie uma string para outra usando ponteiros

#include <stdio.h>

#define TAM 100

void CrtlC_CrtlV(char *CC, char *CV){

  while(*CC != '\0'){

    *CV = *CC;
    ++CC;
    ++CV;
    
  }
  
}


int main(void) {

 void CrtlC_CrtlV(char *CC, char *CV);  
  
 char Str1[TAM],  Str2[TAM];

 puts("Insira o primeira string:"); 
 scanf("%s", Str1); 
 puts("Insira o segunda string:"); 
 scanf("%s", Str2); 
  
 CrtlC_CrtlV( Str1,  Str2);

 printf("Cópia da string 1 para string 2: %s\n", Str2);
  
  return 0;
}