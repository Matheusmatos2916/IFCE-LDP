//Escreva um programa que imprima uma tabela dos equivalentes binario, octal e hexadecimal dos numeros decimais no intervalo de 1 a 256.


#include <stdio.h>

void binario(int Num){
  if(Num == 0){
    
     printf("Binário: %d ", Num);
    
  } else {
    
    binario(Num/2);
    
    printf("%d", Num % 2);
    
  }
  
}

int main(void) {
 
     
  for (int i = 0; i <= 256; i ++){
    
       binario(i);
    
       printf("  | Octal: %o | Hexadecimal: %x\n",i, i);
    
  }

  return 0;
}

