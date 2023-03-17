//Escreva um programa que troque o valor de dois numeros utilizando ponteiros.





#include <stdio.h>

int main(){
    
  int a, b, c, *pa = NULL, *pb = NULL, *pc = NULL;


  pa = &a;
  pb = &b;
  pc = &c;

  *pc = *pa;
  *pa = *pb;
  *pb = *pc;

   puts("Entre com o primeiro número:");
   scanf("%d", pa);

   puts("Entre com o segundo número:");
   scanf("%d", pb);

  printf("Antes de trocar: 1-)%d 2-)%d ", *pa, *pb);


  *pc = *pa;
  *pa = *pb;
  *pb = *pc;
   


  printf("\nDepois de trocar: 1-)%d 2-)%d\n", *pa, *pc);
  

    return 0;
}





