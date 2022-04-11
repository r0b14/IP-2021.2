/* Uso de ponteiros duplos */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

   int *vet; //Ponteiro para inteiros (vetor de inteiros)

   vet = (int *) malloc(10 * sizeof(int));
   if (vet == NULL) {
      prinfo("Error allocate memory");
      exit(1);
   }
   /**
    * Quando estamos trabalhando com vetores unidimensionais, um ponteiro simples é suficiente para o caso.
    * Quando estamos trabalhando com vetores bidimensionais ou além, precisamos usar ponteiros equivalentes as suas dimensoes
   **/
   int **matriz, linha; // Ponteiro para ponteiro de inteiros (vetor de vetor de inteiros)
   matriz = (int **) malloc(10 * sizeof(int *)); //int ** -> informa o tipo que preciso que o ponteiro retorne
   if (matriz == NULL) {
      prinfo("Error allocate memory");
      exit(1);
   }
   for (linha = 0; linha < 10; linha++) {
      matriz[linha] = (int *) malloc(10 * sizeof(int));
      if (matriz[linha] == NULL) { // Verificando alocacao de memoria
         prinfo("Error allocate memory");
         exit(1);
      }
   }
   return 0;
}