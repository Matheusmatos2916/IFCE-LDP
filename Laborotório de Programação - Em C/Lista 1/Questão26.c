/*/Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distˆancia entre os dois
pontos no plano. (Utilize a fun ̧c ̃ao sqrt (numero), biblioteca math.h). /*/


#include <stdio.h>
#include <math.h>

int main(void) {
    float X1, Y1, X2, Y2, D, OP1, OP2;
    
    printf("\nInsira o valor de X1:");
    scanf("%f", &X1);
    
    printf("\nInsira o valor de Y1:");
    scanf("%f", &Y1);
    
    printf("\nInsira o valor de X2:");
    scanf("%f", &X2);
    
    printf("\nInsira o valor de Y2:");
    scanf("%f", &Y2);
    
    OP1 = (X2 - X1);
    OP2 = (Y2 - Y1);
    
    D = sqrt((pow(OP1, 2) + pow(OP2, 2)));
    
    printf("\n A distância entre esses dois pontos é: %.2f", D);
    
  
  return 0;
}