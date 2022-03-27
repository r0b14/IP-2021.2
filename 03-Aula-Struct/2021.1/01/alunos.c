/* Media de Alunos */
#include <stdio.h>

#define SIZE 50
#define T_TURMA 3
/**
 * Usaremos uma lista de alunos com nomes e notas.
 * Verificaremos se os alunos que estão na lista estão iguais ou acima da média
**/

int main () {

   /*
      char nomes[SIZE]; // TENHO 1 NOME DE 70 CARACTERES
   */
   int i;
   char nomes[T_TURMA][SIZE]; // TENHO 50 NOME DE 70 CARACTERES -> vetores bidimensionais
   float notas[T_TURMA], soma = 0, mediaglobal = 0; // TENHO 70 NOTAS INDIVIDUAIS

   // Leitura da Turma
   for ( i = 0 ; i < T_TURMA ; i++ ) {
      printf("Digite o nome do %d aluno: ", i+1);
      scanf(" %49[^\n]", nomes[i]);
      printf("Digite a nota do %d aluno: ", i+1);
      scanf("%d", &notas[i]);
      soma += notas[i];
   }

   mediaglobal = soma / T_TURMA;

   //Selecionando alunos
   for ( i = 0 ; i < T_TURMA ; i++ ) { 
      if (notas[i] >= mediaglobal) {
         printf(" Aluno: %s\n", nomes[i]);
      }
   }

   return 0;
}