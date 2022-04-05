#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 50

typedef struct {
   char nome[SIZE];
   int idade;
   int nota;
} Aluno;

int main() {

   Aluno *turma; // Turma-aponta-aluno
   int qtdAlunos;
   printf("Digite a quantidade de Alunos: ");
   scanf("%d", &qtdAlunos);
   turma = (Aluno *) calloc(qtdAlunos, sizeof(Aluno));
   if (turma == NULL) {
      printf("Failed to allocate memory");
      exit(1);
   }
   for (int i = 0; i < qtdAlunos; i++) {
      printf("nome do %do aluno: ", i+1);
      scanf(" %49[^\n]", turma[i].nome);
      printf("nota do %do aluno: ", i+1);
      scanf("%d", &turma[i].nota);
   }

   for (int i = 0 ; i<qtdAlunos ; i++) {
      printf("%9d\n", i+1);
      printf("%s\n", turma[i].nome);
      printf("%d\n", turma[i].nota);
   }

   return 0;
}