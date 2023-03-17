#include <stdio.h>

int main(void) {
  int Dias;
  float Valor_bruto, dias_total;
  
  printf("Insira o total de dias trabalhados:");
  scanf("%d",&Dias);

  
dias_total = 50.25 * Dias;

if(Dias <= 10){

  printf ("Você não tem direito a gratificação\n");
  printf("Total ganho: R$ %.2f", dias_total);
  
} else if ((Dias > 10) && (Dias <= 20)){
  
  printf("Parabéns!!! você conseguiu uma gratificação de 20 %%\n");
  
  printf("Total ganho: R$ %.2f", dias_total * 1.20);
  
} else if (Dias > 20){
  
printf("Parabéns!!! você conseguiu uma gratificação de 30%%\n");
  
  printf("Total ganho: R$%.2f", dias_total * 1.30);  
}


  
  return 0;
}