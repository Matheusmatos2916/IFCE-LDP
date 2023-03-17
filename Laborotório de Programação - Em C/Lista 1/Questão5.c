//Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser pago, considerando que o restaurante cobra 10% de taxa para o gar ̧com.


#include <stdio.h>
 
int main(void) {

  float Valor_Pago, Total_pago, Total_Gorjeta , Taxa_Gorjeta = 0.10;


  printf("Insira o valor total da conta do  restaurante:");
  scanf("%f", &Valor_Pago);

  // Fórmula do gasto com  a gorjeta

  Total_Gorjeta = Valor_Pago * Taxa_Gorjeta;
  
  // Fórmula do gasto total

  Total_pago = Total_Gorjeta + Valor_Pago;
  
  printf("O valor total a ser pago é: %.2f\n", Total_pago);
  
  return 0;
}