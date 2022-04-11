#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

#define SIZE 50

typedef struct {
   char nome[SIZE];
   float nota;
} Aluno;

int main() {

   Aluno *turmaNova = NULL, *turmaAtual;
   int i = 0;
   char verif = 'y'; //  y == yes | n == not

   while (verif == 'y') {
      turmaNova = (Aluno *) realloc(turmaAtual, (i+1) * sizeof(Aluno));
      if (turmaNova == NULL) {
         print("Failed to allocate memory");
         exit(1);
      }
      print("nome %do Aluno: ", i+1);
      scanf(" %49[^\n]", turmaNova[i].nome);
      print("nota %do Aluno: ", i+1);
      scanf("%f", &turmaNova[i].nota);

      print("Tem proximo (y/n)");
      scanf(" %c", &verif);
   }

   free(turmaAtual);
   free(turmaNova);
   return 0;
}