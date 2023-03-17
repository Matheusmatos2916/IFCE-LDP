// Desenvolva  um  programa  que  calcule  o  salario  liquido  de  um  professor.  Para  elaborar  o  programa,  ´e necess´ario possuir alguns dados, tais como o valor da hora aula, nu´mero de horas trabalhadas no mˆes e percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu sal´ario bruto para fazer o desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario liquido do professor.

#include <stdio.h>

int main(void) {
  float Valor_hora, Horas_trabalhadas, Desconto_INSS, Salario_bruto,Salario_percentual, Salario_liquido;
  
  printf("Informe o valor da hora aula:");
  scanf("%f", &Valor_hora); 
   
  printf("Informe o números de aulas trabalhadas no mês:");
  scanf("%f", &Horas_trabalhadas);

  printf("Informe o percentual de desconto do INSS:");
  scanf("%f", &Desconto_INSS);

  Salario_bruto = Valor_hora * Horas_trabalhadas;

  Salario_percentual = Salario_bruto * Desconto_INSS;

  Salario_liquido = Salario_bruto - Salario_percentual;

  printf("O valor do salário bruto é: R$%.2f\n", Salario_bruto);
  printf("O valor do salário percentual é: R$%.2f\n", Salario_liquido);
  printf("O valor percentual de desconto do INSS: R$%.2f\n", Salario_percentual);


  
  return 0;
}