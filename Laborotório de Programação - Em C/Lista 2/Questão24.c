//O conjunto de trˆes valores inteiros para os lados de um triˆangulo retˆangulo  ́e chamado de tripla de Pit ́agoras. Esses trˆes lados precisam satisfazer o relacionamento de que a soma do quadrado de dois catetos  ́e igual ao quadrado da hipotenusa. Ache todas as triplas de Pit ́agoras n ̃ao superiores a 500 para cateto1, cateto2 e hipotenusa.


#include <stdio.h>
#include <math.h>

int main() {
    int CA, CO, H;

    for(H = 1; H < 500; H++) {
        for(CA = 1; CA < 500; CA++) {
            for(CO = 1; CO < 500; CO++) {
                int P1F = pow(CA, 2) + pow(CO, 2);
                int P2F = pow(H, 2);

                if(P1F == P2F) {
                  printf("Tripla de pitadoras: %d² + %d² = %d\n",  CA, CO, H);
                
                } else if(P1F > P2F){
          
                    break;
                }
            }
        }
    }

    return 0;
}