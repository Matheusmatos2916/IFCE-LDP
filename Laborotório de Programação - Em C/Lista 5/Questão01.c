//Escreva  um  programa  que  receba  dois  valores  por  linha  de  execu¸c˜ao  e  realize  a  soma  ou  multi- plica¸c˜ao, conforme um c´odigo de opera¸c˜ao tamb´em recebido por linha de execu¸c˜ao.





#include <stdio.h>



void Operacoes ();


float Escolher_Operacao(float , float ,float );

int main(int argc, char *argv[]) {

   float N1, N2, Op;

  Operacoes();
  

 Escolher_Operacao(Op, N1, N2);

  
 

   
}

void Operacoes ()
{
  
  printf ("_______________________________________________________\n");
  printf ("| Qual operação você deseja realizar ?                | \n");
  printf ("| (+) soma (-) subtração (*) multiplicação (/)divisão |\n");
  printf ("|_____________________________________________________|\n");
  
}

float Escolher_Operacao(float Resultado, float A,float B) {
  
 char OP;
 int valido = 0;

  
 printf("Escolha uma opção:");
  
while(valido== 0) {
  
scanf("%c", &OP);
  
switch(OP){
case '+': 
  
    printf("\nOpcao %c escolhida!\n",OP);
    printf("\nInsira o 1°número:");
    scanf("%f",&A);
    printf("\nInsira o 2°número:");
    scanf("%f",&B);
  
    Resultado = A+B;
    printf("\n\t>> Resultado: %.2f\n",Resultado);

    break;
  
case '-':
     
    printf("\nOpcao %c escolhida!\n",OP);
    printf("\nInsira o 1°número:");
    scanf("%f",&A);
    printf("\nInsira o 2°número:");
    scanf("%f",&B);
  
    Resultado = A-B;
    printf("\n\t>> Resultado: %.2f\n",Resultado);

    break;
  
case '*':
    printf("\nOpcao %c escolhida!\n",OP);
    printf("\nInsira o 1°número:");
    scanf("%f",&A);
    printf("\nInsira o 2°número:");
    scanf("%f",&B);
  
    Resultado = A*B;
    printf("\n\t>> Resultado: %.2f\n",Resultado);

     break;
case '/':
    printf("\nOpcao %c escolhida!\n",OP);
    printf("\nInsira o 1°número:");
    scanf("%f",&A);
    printf("\nInsira o 2°número:");
    scanf("%f",&B);
  
    Resultado = A/B;
    printf("\n\t>> Resultado: %.2f\n",Resultado);

   
return OP; 
    break;
default:
  
   Operacoes();
   } 
  } 
}



