// Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal atraves da seguinte f́ormula: para homens: 72.7 * altura - 58 /para mulheres: 62.1 * altura - 44.7


#include <stdio.h>

void Selecionar_Sexo() {
    printf ("___________________________________________________\n");
    printf("|                  Qual é o seu sexo?              |\n");
    printf("|  (M-) Masculino                (F-)Feminino      |\n");
    printf("|__________________________________________________|\n");
}


char Selecionar_Opcao() {
      
  char OP;
  int valido = 0;
  printf("Escolha uma opção:");

  while(valido== 0) {
   scanf("%c", &OP);
    
switch(OP){
case 'M':
case 'F':
return OP;
default:
  printf("Opção inválida, insira outro valor\n\n");
  Selecionar_Sexo(); 
  }
 }
  }


int main(void){
  char op;
  Selecionar_Sexo();
  op = Selecionar_Opcao();
  
float altura, Peso;
printf("A opção escolhida foi: %c\n", op);

  printf("Insira sua altura (em metros):");
  scanf("%f", &altura);
  
if (op=='M'){

 Peso = 72.7 * altura - 58;
 printf("Seu peso é: %.2f\n", Peso);
  
} else if (op=='F'){

 Peso = 62.1 * altura - 44.7;
 printf("Seu peso é: %.2f\n", Peso);
} 

return 0;
}
  
