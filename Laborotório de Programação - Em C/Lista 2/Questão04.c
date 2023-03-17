// Implementar um programa para resolver o seguinte problema: Jos ́e tem 150 cent ́ımetros e cresce 2 centımetros por ano. O Pedro tem 110 cent ́ımetros e cresce 3 centimetros por ano. Em quantos anos Pedro ser ́a maior que Jos ́e?


#include<stdio.h>

int main (void) {

float P = 110 /** cm **/ , J = 150  /** cm **/;
int i = 0;
  
do
{
 J = J + 2  /** cm **/;
 P = P + 3 /** cm **/;
 i++;
} while (J > P);


printf("%d anos\n", i);
return 0;
}