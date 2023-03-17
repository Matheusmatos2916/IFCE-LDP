//Escrever um programa que calcule e apresente o somat ́orio do n ́umero de gr ̃aos de trigo que se pode obter num tabuleiro de xadrez, obedecendo `a seguinte regra: colocar um gr ̃ao de trigo no primeiro quadro e nos quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro quadro coloca-se um gr̃ao, no segundo quadro colocam-se dois gr ̃aos (tendo neste momento trˆes gr ̃aos), no terceiro quadro colocam-se quatro gr ̃aos (tendo neste momento sete gr ̃aos), no quarto quadro colocam-se oito gr ̃aos (tendo-se ent ̃ao quinze gr ̃aos) at ́e atingir o sexag ́esimo quarto quadro.





#include <stdio.h>

int main(){

  int i = 0;
  float Dobro = 0, S = 0;

  for(Dobro = 1; Dobro >= 0 && i!= 64; Dobro = (2*Dobro)){

    i++;
    
    printf("%d-) Quadro possuí %.0f grãos de trigo\n", i, Dobro);

    S += Dobro;
  
  } 

    printf("\nO somatório é: %.0f\n", S);
  return 0;
}



