/* Media de Alunos */
// Resumiremos o código alunos, agora usando a estrutura para poder melhorar
#include <stdio.h>
#include <string.h>

#define SIZE 50
#define T_TURMA 3
/**
 * Usaremos uma lista de alunos com nomes e notas.
 * Verificaremos se os alunos que estão na lista estão iguais ou acima da média
**/

typedef struct {
   char nome[SIZE];
   float nota;
} Aluno; // Aluno eh um tipo, que é uma estrutura

typedef struct {
   /* char nome[55]; // Podemos verificar que o professor é em partes um aluno... podemos reaproveitar a estrutura anterior.
   double nota; */
   Aluno parteAluno;
   unsigned char chato; // Como não temos binário estamos simulando
} Professor;

int main () {

   int i;
   Aluno aluno;
   Professor professor;

   strcpy (aluno.nome, "Robson Th");
   strcpy (professor.parteAluno.nome, "Alexandre"); //Nesse caso estamos acessando nome que está dentro do parte aluno 


   // Leitura da Turma
   for ( i = 0 ; i < T_TURMA ; i++ ) {
      printf("Digite o nome do %d aluno: ", i+1);
      scanf(" %49[^\n]", aluno.nome);
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