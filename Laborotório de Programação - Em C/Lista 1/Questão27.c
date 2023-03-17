//Escreva um programa que solicite 3 n ́umeros em ponto flutuante e imprima a m ́edia aritm ́etica e geom ́etrica. (Utilize a fun ̧c ̃ao pow(base, expoente) da biblioteca math.h).

#include <stdio.h>
#include <math.h>

int main(void) {

  float N1, N2, N3, MA, MG, Mult, C;

  
  printf("Insira três números:");
  scanf("%f %f %f", &N1, &N2, &N3);

  MA = (N1 + N2 + N3)/ 3.0;
  Mult = N1*N2*N3;
  MG = pow(Mult, 1.0/3.0);




  printf("O valor da média aritmética é: %.2f\n", MA);
  printf("O valor da média geométrica é: %.2f\n", MG);


  
  return 0;
}