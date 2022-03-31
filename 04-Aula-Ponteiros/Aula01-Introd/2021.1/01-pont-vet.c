/* Ponteiros e Vetores */
#include <stdio.h>

int main() {

   int vet[3] = { 0, 1, 2};

   /** Nesse caso só aparecerá o valor na posicao 0
    *
    * int *pontVet = vet;
    * for (int i = 0; i < 3; i++) {
    *    printf("%d\n", *pontVet);
    * }
   **/

   /** Nesse caso aparecerá os valores que o ponteiro vai apontar a depender do valor de i
      for (int i = 0; i < 3; i++) {
         //ponteiro pontvet aponta para o objeto de vet na posicao i
         int *pontVet = &vet[i];
         printf("%i\n", *pontVet);
      }
   **/

   return 0;
}