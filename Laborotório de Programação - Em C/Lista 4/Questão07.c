//Escreva um programa que concatene duas strings utilizando ponteiros.




#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 100


void concatencao(char *p_str1, char *p_str2, char *p_strRe){

     while(*p_str1){
        *p_strRe = *p_str1;
         p_strRe += 1;
         p_str1 += 1;
     }

     while(*p_str2){
        *p_strRe = *p_str2;
         p_strRe += 1;
         p_str2 += 1;
     }

     *p_strRe = '\0';

}

int main()
{
    char str1[TAM], str2[TAM], str3[TAM], *p_str1 = NULL, *p_str2 = NULL;

    p_str1 = str1;
    p_str2 = str2;


   printf("Digite 1°string:");
   scanf("%s", p_str1);

   printf("Digite 2°string:");
   scanf("%s", p_str2);

  
    char *p_strRe = (char*) malloc(((int)strlen(p_str1) + (int)strlen(p_str2)+1)*sizeof(char)); 
  
    concatencao(p_str1, p_str2,  p_strRe);
    printf("O resultado da concatenação é: %s", p_strRe);
    return 0;
}