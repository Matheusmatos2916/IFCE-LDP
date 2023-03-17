// Escreva um programa que adicione dois n ́umeros usando ponteiros. Al ́em do valor da soma, imprima tamb ́em o endere ̧co de mem ́oria onde o valor resultante dessa soma est ́a armazenado.


#include <stdio.h>

int main(){
  int Num1, Num2, Soma, *Ponteiro_Num1 = NULL, *Ponteiro_Num2 = NULL, *Ponteiro_Soma = NULL;

    Ponteiro_Num1 = &Num1;
    Ponteiro_Num2 = &Num2;
    Ponteiro_Soma = &Soma;

    puts("Entre com o primeiro número:");
    scanf("%d",Ponteiro_Num1);

    puts("Entre com o segundo número:");
    scanf("%d",Ponteiro_Num2);

    *Ponteiro_Soma = * Ponteiro_Num1 + * Ponteiro_Num2;

    printf("\n--- Soma de dois números ---\n");
    printf("1°Número informado: %d \nEndereço do 1°Número: %p \n\n", Num1, Ponteiro_Num1);
    printf("2°Número informado: %d \nEndereço do 2°Número: %p \n\n", Num2, Ponteiro_Num2);
    printf("O resultado da soma entre os números: %d \nEndereço da soma: %p \n\n", Soma, Ponteiro_Soma);



    return 0;

}