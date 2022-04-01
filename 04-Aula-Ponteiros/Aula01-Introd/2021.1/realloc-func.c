/* Manipulando vetores */
#include <stdio.h>
#include <stdlib.h>

   /**
    * #### Função ralloc ####
    * Aloca para mais ou para menos espaço alocado que desejar
    * A função vai pedir ao S.O ou reduzir memórias baseado na tipo que foi pedido.
    * realloc (vet, n * sizeof(int)); -> nesse caso o ponteiro vet vai receber o valor ou 
    * realloc (n, sizeof(int)); -> nesse caso o n vai multiplicar pelo valor
    * S.O me dê n blocos do tamanho de um inteiro ou reduza n blocos do tamanho de um inteiro
   **/

int main() {

   int n, i;
   printf("Digite N: ");
   scanf("%d", &n);
   int *vetAnt = NULL, *vetAt;

   // Realocando para 2x o tamanho do vetor
   vetAt = (int *) realloc(vetAnt, n * 2 * sizeof(int));

   // O teste previne acontecer uma invasao de memoria
   if(vetAt == NULL) {
      printf("Error");
      exit(1);
   } else {
      for (i = 0; i < n * 2 * sizeof(int); i++) {
         scanf("%d", &vetAt[i]);
      }
   }

   return 0;
}