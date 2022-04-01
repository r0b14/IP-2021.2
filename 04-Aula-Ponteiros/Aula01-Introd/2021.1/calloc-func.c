/* Manipulando vetores */
#include <stdio.h>
#include <stdlib.h>

   /**
    * #### Função malloc ####
    * Aloca e limpa o espaço alocado
    * A função vai pedir a S.O memórias baseado na tipo que foi pedido.
    * calloc (n, sizeof(int));
    * S.O me dê n blocos do tamanho de um inteiro e limpe tudo o que tem dentro
   **/

int main() {

   int n, i;
   printf("Digite N: ");
   scanf("%d", &n);
   int *vetAnt = NULL, *vetAt;

   vetAt = (int *) calloc(vetAnt, n * sizeof(int));

   // O teste previne acontecer uma invasao de memoria
   if(vetAt == NULL) {
      printf("Error");
      exit(1);
   } else {
      for (i = 0; i < n; i++) {
         scanf("%d", &vetAt[i]);
      }
   }

   return 0;
}