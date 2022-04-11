/* Ponteiros e Matrizes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

   int matriz[2][2] = { { 2, 3},
                        { 4, 5} };

   int *pont;
   pont = (int *) matriz;
   /**
    * Se for usar um ponteiro com uma dimensao, eh preciso que informe
    * o total de espaco alocado, caso contrario sera apresetando um parte.
    * ex: matriz tem 4 espacos alocados, porem se usar a apresentacao de apenas 2
    * so sera mostrado 2 e 3 e nao o TODO.
   **/
   for (int i = 0; i < 4; i++) {
      printf("matriz[%d] = %d\n", i+1, pont[i]);
   }
   return 0;
}