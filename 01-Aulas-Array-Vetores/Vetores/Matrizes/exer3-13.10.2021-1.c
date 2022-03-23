#include <stdio.h>

//#define SIZE 10

int main() {
   /**
    * Bubblesort
    * Ordenando o vetor de forma crescente
    * 
    */

   int i, aux, contador, qtd;
   printf("Digite a quantidade de elementos: ");
   scanf("%d", &qtd);
   int vet[qtd];
   // Recebendo os valoresz
   for ( i = 0 ; i < qtd ; i++ ) {
      printf("%d: ", i+1);
      scanf("%d", &vet[i]);
   }

   // Ordenando vetor
   for ( contador = 1 ; contador < qtd ; contador++ ) {
      for (i = 0 ; i < qtd - 1 ; i++ ) {
         if(vet[i] > vet[i+1]) {
            aux = vet[i];
            vet[i] = vet[i+1];
            vet[i+1] = aux;
         }
      }
   }

   for (contador = 0; contador < qtd; contador++) {
      printf("[%d]= %d  ", contador+1, vet[contador]);
   }

   return 0;
}