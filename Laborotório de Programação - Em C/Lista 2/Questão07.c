//Para que a divis ̃ao entre 2 n ́umeros possa ser realizada, o divisor n ̃ao pode ser nulo (zero). Escreva um programa para ler 2 valores e imprimir o resultado da divis ao do primeiro pelo segundo. OBS: O programa deve validar a leitura do segundo valor (que n ̃ao deve ser nulo). Enquanto for fornecido um valor nulo a leitura deve ser repetida.



#include <stdio.h>

int main(void) {

  float N1, N2, D = 0;

  
  printf("Insira um primeiro valor:");
  scanf("%f", &N1);

  do {
    printf("Insira um segundo valor:");
    scanf("%f", &N2);

  if(N2 != 0){    
     D = N1/N2;
     printf("O resultado da divisão é: %.2f\n", D);
    }
    
 
   
 }while(N2 == 0);
  
  return 0;
}