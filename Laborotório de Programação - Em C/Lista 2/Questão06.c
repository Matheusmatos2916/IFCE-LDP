//Escreva um programa que transforme o computador numa urna eletrˆonica para eleicao para presidente de um certo pa ́ıs, `as quais concorrem os candidatos 5-Paulo e 7-Renata. Cada voto deve ser dado pelo numero do candidato, permitindo-se ainda o voto 0 para voto em branco. Qualquer voto diferente dos j́a citados  ́e considerado nulo; em qualquer situa ̧c ̃ao, o eleitor deve ser consultado quanto `a confirma ̧c ̃ao do seu voto. No final da elei ̧c ̃ao o programa deve emitir um relat ́orio contendo as porcentagens de vota ̧c ̃ao de cada candidato, votos em branco, votos nulos e o candidato eleito. Obs.: O c ́odigo para finalizar a urna (vota ̧c ̃ao)  ́e o usu ́ario digitar algum n ́umero negativo.


// 5-Paulo 7-Renata 0- voto em branco *- voto nulo


void Informar_Candidato(){
  printf("_______________________________________\n");
  printf("|           Iniciar votação           |\n");
  printf("| (5) Paulo               (7)Renata   |\n");
  printf("| (0) Voto em branco (Outros)voto nulo|\n");
  printf("|_____________________________________|\n");
  
}


void Porcentagem(int P, int R, int VB, int VN){

  int VT = P + R + VB + VN; 
  float PVP, PVR, PVB, PVN;
 
   PVP = (((float) P)/ VT) * 100;
   PVR = (((float) R)/ VT) * 100;
   PVB = (((float) VB)/ VT) * 100;
   PVN = (((float) VN)/ VT) * 100;


   printf("\n--- Quantidade de votos ---\n Voto em branco: %.2f %%\n Voto no candidato Paulo: %.2f %%\n Voto na candidata Renata: %.2f %%\n Voto nulo: %.2f %%\n ", PVB, PVP, PVR, PVN);


}


  
#include <stdio.h>

int main(void) {
  int v, P = 0, R = 0, VB = 0, VN = 0, VC;  

  do{
    
     Informar_Candidato(); 
     printf("Informe o número do seu candidato:");
     scanf("%d", &v);

    switch(v){
      case 0:
        
          printf("Voto provisório (Voto em branco), Digite 0 para confirmar:");
        
          scanf("%d", &VC);

          if(VC == 0){
            
           VB++;
            
           printf("Confirmado! Voto em branco!\n");
            
            }
        
           break;
      
      case 5:

          printf("Voto provisório (Voto no candidato Paulo), Digite 5 para confirmar:");
        
          scanf("%d", &VC);

          if(VC == 5){
            
           P++;
            
           printf("Confirmado! Voto no candidato Paulo!\n");

          }
        
           break;

      
      case 7:

        
          printf("Voto provisório (Voto na candidata Renata), Digite 7 para confirmar:");
        
          scanf("%d", &VC);

        if (VC == 7){
          
           R++;
          
           printf("Confirmado! Voto na candidata Renata!\n");

          }
        
           break;
      
      default: 

          if(v > 0){
          printf("Voto provisório (Voto nulo), Digite o número novamente para confirmar:");
        
          scanf("%d", &VC);

        if (VC > 0){
          
           VN++;
          
           printf("Confirmado! Voto nulo!\n");

          }
        
           break;
      }
    }
  } while(v >= 0);

   printf("\n--- Resultado final ---\n Voto em branco: %d\n Voto no candidato Paulo: %d\n Voto na candidata Renata: %.d\n Voto nulo: %.d\n ", VB, P , R, VN);

  Porcentagem(P, R, VB, VN);
  
  return 0;
}