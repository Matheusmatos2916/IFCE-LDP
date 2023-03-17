
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void Imprimir_Opcoes(){
   
   puts("\n ----- Escolha uma opção ----- ");
   puts("  | (1-) Ocupar armário        | \n");    
   puts("  | (2-) Liberar armário       | \n");
   puts("  | (3-) Sair                  | \n");
   puts("  ------------------------------ \n");
}

int Bits(int entrada, int NB){
  
  int Mask = (1 << NB);

  return(entrada & Mask);
  
}



int main() {
  unsigned char Verificador = 0, Op = 0;

  do {


    Imprimir_Opcoes();
    puts("Selecione uma opção:");
    scanf(" %c", &Op);



switch (Op) {
  
   case '1':
       puts("A opção escolhida - (1) \n");
       
       srand(time(NULL));
       Verificador |= ( 1 << rand() % 8);

      puts("\n ---  Relatório  --- \n");

      for( int DCont = 7; 0 <= DCont; DCont--){

        if (Bits(Verificador, DCont)){
          
          printf("A posição %d está ocupada (Escolhida aleatoriamente)\n", DCont);
          
      } else if(!Bits(Verificador, DCont)){
          
         printf("A posição %d está desocupada\n", DCont);

          }  
        }

     puts("\n -------------------- \n");

   break;

   case '2':


         puts("A opção escolhida - (2) \n");

         int Desocupar = 0;
         
     
         puts("Informe a posição que você quer desocupar:");
         scanf("%d", &Desocupar);

         Verificador &= ~(1 << Desocupar); 

         puts("\n ---  Relatório 2  --- \n");
     
      for( int DCont = 7; 0 <= DCont; DCont--){

        if (Bits(Verificador, DCont)){
          
          printf("A posição %d está ocupada\n", DCont);
          
      } else if(!Bits(Verificador, DCont)){


         printf("A posição %d está desocupada\n", DCont);

          }  
        }
           
   break;
  
   case '3':

         puts("A opção escolhida - (3) \n");
     
   break;
  
   default:

     printf("Opção inválida\n");
     Imprimir_Opcoes();     
 }


  } while ( Op != '3');


    puts("Finalizado com sucesso!!! \n");
  
  return 0;
}


 
