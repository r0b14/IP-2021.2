/* Manipulando vetores */
#include <stdio.h>
#include <stdlib.h>

   /**
    * #### Funçaõ malloc ####
    *      Memory Allocato
    * A função vai pedir a S.O memórias baseado na tipo que foi pedido.
    * malloc ( n * sizeof(int));
    * S.O me dê n blocos do tamanho de um inteiro
   **/

int main() {

   int n, i;
   printf("Digite N: ");
   scanf("%d", &n);
   int *vet;
   // o valor vai depender de quanto o usuário vai entrar
   // n = 4; 4 * 4 = 16 bytes alocados
   vet = (int *) malloc(n * sizeof(int));

   // O teste previne acontecer uma invasao de memoria
   if(vet == NULL) {
      printf("Error");
      exit(1);
   } else {
      for (i = 0; i < n; i++) {
         scanf("%d", &vet[i]);
      }
   }

   return 0;
}