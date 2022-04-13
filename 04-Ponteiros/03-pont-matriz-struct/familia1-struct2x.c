/* Nesse caso estamos usando ponteiros duplos e estrutras 2x parar poder melhorar o programa */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 30
#define TAM 2

typedef struct {
   int dia, mes, ano;
} Data;

typedef struct {
   char nome[29];
   int idade;
   float altura;
   Data *dataNasci; // Ponteiro para Ponteiro
} Pessoa;

int main() {
   /**
    * A titulo de represenção, podemos fazer printf(sizeof(data *))
    * Demonstraremos o tamanho em bytes de dataNasci que está dentro de pessoa
    * A titulo de represenção, podemos fazer printf(sizeof(data))
    * Demonstraremos o tamanho em bytes da estrutura Data
   **/
   Pessoa *familia;
   familia = (Pessoa *) malloc(TAM * sizeof(Pessoa));

   //Verificando alocação
   if(familia == NULL)
   {
      printf("Error for alocacion\n");
      exit(1);
   }
   for (int i = 0; i < TAM; i++)
   {
      printf("Nome= ");
      scanf(" %29[^\n]", familia[i].nome);
      printf("Idade= ");
      scanf("%d", &familia[i].idade);
      printf("Altura= ");
      scanf("%f", &familia[i].altura);
      familia[i].dataNasci = (Data *) malloc(sizeof(Data)); //Alocando um espaço do tipo Data
      if(familia[i].dataNasci == NULL) {
         printf("Error for alocacion\n");
         exit(1);
      }
      printf("Data de nascimento= ");
      scanf("%d/%d/%d", &familia[i].dataNasci->dia, &familia[i].dataNasci->mes, &familia[i].dataNasci->ano);
      /**
       * Ele criou um vetor dentro de outro vetor.
       * Nesse caso estamos usando a localização de ponteiro de ponteiro
      **/
   }

   //Imprimindo a estrutura
   for (int i = 0; i < TAM; i++)
   {
      printf("\n");
      printf("nome= %s\n", familia[i].nome);
      printf("idade= %d\n", familia[i].idade);
      printf("altura= %.2f\n", familia[i].altura);
      printf("data de nascimento= %d/%d/%d\n", familia[i].dataNasci[0], familia[i].dataNasci[1], familia[i].dataNasci[2]);
   }

   free(familia);
   system("pause");
   return 0;
}