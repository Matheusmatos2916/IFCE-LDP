/*/Escreva um programa que leia o raio de um c ́ırculo e imprima seu diˆametro, o valor de sua circunferencia e sua  area. Use o valor de 3,14159 para ”pi”. Fa ̧ca cada um destes c ́alculos dentro da instru ̧c ̃oes (ou
instru ̧c ̃oes) printf e use o especificador de convers ̃ao %f.
/*/
#include <stdio.h>
#include <math.h>

int main(void) {

 float R, D, pi = 3.14159, C, A;
 
 printf("Insira o valor do raio do círculo em metros:");
 scanf("%f", &R);
 
//circunferencia 
 C = (2*pi*R);

// diamêtro
 D = pow (R, 2);
 
//área
A = pi*( pow(R, 2));

 
 printf("O valor da área desse círculo é: %.2f metros quadrados\n", A);
 printf("O valor da circunferência é:%.2f metros\n", C);
 printf("O diamêtro resultante é: %.2f metros\n", D);
 
}