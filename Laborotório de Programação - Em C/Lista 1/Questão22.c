// A linguagem C pode representar letras mai ́usculas, letras min ́usculas e uma grande variedade de śımbolos especiais. O C usa internamente pequenos inteiros para representar cada caractere diferente. O conjunto de caracteres que um computador utiliza e as representa ̧c ̃oes dos n ́umeros inteiros correspondentes `aqueles caracteres  ́e chamado conjunto de caracteres do computador. Vocˆe pode imprimir o n ́umero inteiro equivalente `a letra mai ́uscula A, por exemplo, executando a instru ̧c ̃ao. Escreva um programa em C que imprima os inteiros equivalentes a algumas letras mai ́usculas, letras min ́usculas e s ́ımbolos especiais. No m ́ınimo, determine os n ́umeros inteiros equivalentes ao conjunto seguinte: A BCabc 0 12 $ * + / e o caractere espa ̧co em branco.



#include <stdio.h>

int main(void) {

  char imprimir[] = {'A', 'B', 'C', 'a', 'b', 'c', '0', '1', '2', '$', '*', '+', '/', ' '};
  
  for( int i = 0; i < 14; ++i){
    
    printf(" %c = %d\n", imprimir[i],imprimir[i]);  
  }
  printf ("\n");

  

  

  return 0;
}