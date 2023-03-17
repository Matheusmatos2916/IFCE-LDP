//Escreva um programa que mostre a diferenca entre pre-incrementar e pos-incrementar usando o operador –.


#include <stdio.h>


int main(){
int x,y;
 x = 0, y = 0;  

printf("Pós-incremento\n");

while(x < 5){
   

y = x++;

printf("Valor de x: %d\n", x);
printf("Valor de y: %d\n", y);

}

x = 0, y = 0;

printf("\nPré-Incremento\n");

while(x<5){
  y = ++x;
 

 printf("Valor de x: %d\n", x);
 printf("Valor de y: %d\n", y);


}

  return 0;
  }

