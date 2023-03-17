//Faca um programa em C que leia um vetor do tipo float com 15 elementos e apresente a soma do menor e maior elemento do vetor fornecido.



#define N 15


#include <stdio.h>

int main(void) {

 float V[N], Maior = 0, Menor = 0, Soma;

//Entrada
 for (int i = 0; i <= N - 1; i++){

   printf("Informe o %d° valor:", i+1);
   scanf("%f", &V[i]);


 }


  puts("\n");
  
 //Saída 1  
  puts("\n---- Entradas ----"); 


  
for ( int i = 0; i <= N - 1; i++){

   printf("O %d° valor inserido é: %.2f\n", i+1, V[i]);
   printf("");

}

  


Maior = V[0];
Menor = V[0];

for(int i = 1; i < N; i++){

if(Maior < V[i]){
  
  Maior = V[i];

} else if (Menor > V[i]){

 Menor = V[i];

} 

   }

 Soma = Maior + Menor;

  //Saída 2 
  puts("\n---- Resultado ----");  
   
 printf("O Maior valor: %.2f\n", Maior);
 printf("O Menor valor: %.2f\n", Menor);
 printf("O valor da adição entre %.2f + %.2f = %.2f\n", Maior, Menor, Soma);
  

    return 0;
}
