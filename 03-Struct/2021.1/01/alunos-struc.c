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
   //usigned -> permite-me guardar só numeros positivos com o range de 0 a 255
} Professor;

int main () {

   int i;
   float soma = 0, mediaglobal = 0;
   Aluno alunos[T_TURMA];
   Professor professor; // professor é a variável do tipo Professor que possui toda uma estrutura declarada inicialmente
   /** 
      strcpy (alunos.nome, "Robson Th");
      strcpy (professor.parteAluno.nome, "Alexandre"); //Nesse caso estamos acessando nome que está dentro do parte aluno 
      professor.chato = 0; // Estou declarando que o professor não eh chato.
   **/

   // nome-variavel[posicao-vetor].atributo
   // Leitura da Turma
   for ( i = 0 ; i < T_TURMA ; i++ ) {
      printf("Digite o nome do %d aluno: ", i+1);
      scanf(" %49[^\n]", alunos[i].nome);
      printf("Digite a nota do %d aluno: ", i+1);
      scanf("%f", &alunos[i].nota);
      soma += alunos[i].nota;
   }

   mediaglobal = soma / T_TURMA;

   //Selecionando alunos
   printf("Media Global: %.2f\n", mediaglobal);
   for ( i = 0 ; i < T_TURMA ; i++ ) { 
      if (alunos[i].nota >= mediaglobal) {
         printf(" Aluno: %s\n", alunos[i].nome);
      }
   }

   return 0;
}