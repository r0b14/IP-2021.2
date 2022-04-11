/* Manipulando vetores */
#include <stdio.h>
#include <stdlib.h>

   /**
    * #### Função calloc ####
    * Aloca e limpa o espaço alocado
    * A função vai pedir a S.O memórias baseado na tipo que foi pedido.
    * calloc (vet, n * sizeof(int)); -> nesse caso o ponteiro vet vai receber o valor ou 
    * calloc (n, sizeof(int)); -> nesse caso o n vai multiplicar pelo valor
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