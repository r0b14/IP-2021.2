#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 30
#define TAM 2

typedef struct {
   char nome[29];
   int idade;
   float altura;
   int *datanasci; // Sao 3 numeros -> dd/mm/aaaa
} Pessoa;

int main() {

   Pessoa *familia;
   familia = (Pessoa *) malloc(4 * sizeof(Pessoa));
   //Verificando alocação
   if(familia == NULL) {
      printf("Error for alocacion\n");
      exit(1);
   }
   for (int i = 0; i < TAM; i++) {
      printf("Nome= ");
      scanf(" %29[^\n]", familia[i].nome);
      printf("Idade= ");
      scanf("%d", &familia[i].idade);
      printf("Altura= ");
      scanf("%f", &familia[i].altura);
      familia[i].datanasci = (int *) malloc(3 * sizeof(int)); //quero 3 espaços do tamanho int
      if(familia[i].datanasci == NULL) {
         printf("Error for alocacion\n");
         exit(1);
      }
      printf("Data de nascimento= ");
      scanf("%d/%d/%d", &familia[i].datanasci[0], &familia[i].datanasci[1], &familia[i].datanasci[2]);
      /**
       * Ele criou um vetor dentro de outro vetor.
       * o datanasci[indice] nos informa onde vai ser guardado esse dado
      **/
   }

   //Imprimindo a estrutura
   for (int i = 0; i < TAM; i++) {
      printf("\n");
      printf("nome= %s\n", familia[i].nome);
      printf("idade= %d\n", familia[i].idade);
      printf("altura= %.2f\n", familia[i].altura);
      printf("data de nascimento= %d/%d/%d\n", familia[i].datanasci[0], familia[i].datanasci[1], familia[i].datanasci[2]);
   }

   for(int i = 0; i < TAM; i++) {
      free(familia[i].datanasci);
   }
   free(familia);
   system("pause");
   return 0;
}