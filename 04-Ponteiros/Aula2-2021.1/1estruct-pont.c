/* Estruturas + Ponteiros */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 50

typedef struct {
      char nome[SIZE];
      float *notas; // Trabalhar com vetor dinamico
      int qtdNotas; // Vai nos dar o 'tamanho' das notas
   } Aluno;

int main() {

   /**
    * Aluno *alunos; -> Ponteiro para um aluno, porém o nome alunos é referente a quantidade de alunos que vamos inserir. Por isso coloquei o plural.
    * *alunos é um tipo de estrutura que quando usarmos malloc para poder 'ter' espaços na memoria, teremos o tamanho definitivo a estrutura Aluno.
    **/
   Aluno *alunos; 
   // Aloque para alunos o tamanho da estrutura de Aluno.
   alunos = (Aluno *) malloc(sizeof(Aluno)); // 1 Aluno
   if (alunos == NULL) { // Verificando alocação
      printf("Failed to allocate");
      exit(1);
   }
   /**
    * Como alunos é um ponteiro para a estrutura Aluno
    * (*alunos) -> é a mesma coisa que a estrutura Aluno. ponteiros-para-Aluno
    * strcpy((*alunos).nome, "Robson Thiago");
    * strcpy( alunos -> nome, "Robson Thiago"); // Usado para 
    */
   strcpy((*alunos).nome, "Robson Thiago");


   return 0;
}