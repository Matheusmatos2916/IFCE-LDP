//Uma loja vende seus produtos no sistema entrada mais duas prestacoes, sendo a entrada maior do que ou igual as duas prestacoes; estas devem ser iguais, inteiras e as maiores poss ́ıveis. Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas prestacoes s ̃ao iguais a R$ 90,00; se o valor da mercadoria for R$ 302,75, a entrada  ́e de R$ 102,75 e as duas prestacoes s ̃ao iguais a R$ 100,00. Escreva um programa que receba o valor da mercadoria e forneca o valor da entrada e das duas prestacoes, de acordo com as regras acima.


#include <stdio.h>

int main(){
  float C, E;
  int P;


do {
 printf("Insira o valor da compra:");
 scanf("%f", &C);

 
 P = C/3;

 E = C - (2*P);

 if(C > 0){
   
   printf("Entrada será:  R$ %.2f\n", E);
   printf("cada parcela das duas será:  R$ %d\n", P);
   
   }
  
  }while(C > 0);

  puts("\n");
  return 0;
}