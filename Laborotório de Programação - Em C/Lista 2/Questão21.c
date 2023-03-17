//Um pal ́ındromo  ́e um n ́umero, ou frase textual, que pode ser lido da mesma forma da esquerda para a direita e vice-versa. Por exemplo, cada um dos seguintes inteiros de cinco d ́ıgitos  ́e um pal ́ındromo: 12321, 55555, 45554 e 11611. Escreva um programa que leia um inteiro de cinco d ́ıgitos e determine se ele  ́e ou n ̃ao um pal ́ındromo. 

#include <stdio.h>
#include <math.h>

int main() {
  int N5D, Reserva, Troca; 


  do{
 printf("Informe um número de cinco dígitos: ");
  scanf("%d", &N5D);

  Reserva = N5D;
  Troca = 0;

  while ( Reserva != 0) {
    
    Troca = Troca * 10 + Reserva % 10;
    
    Reserva = Reserva / 10;
    
     int abs(int Reserva);
  }

  if (Troca == N5D)
    printf("%d é palindrome\n", N5D);
  else
    printf("%d não é palindrome\n", N5D);
    
   } while( N5D >= 0); 
   
  return 0;
}
