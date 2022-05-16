#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 30

typedef struct {
   int codigo;
   char nome[SIZE];
   int idade;
   float altura;
   float peso;
} Pessoa;

void menu() {
   printf("\n1 - Adicionar Usuario\n");
   printf("2 - Adicionar Usuario\n");
   printf("3 - Adicionar Usuario\n");
   printf("0 - Exit Program\n");
}

void cadastrarPessoa(Pessoa **ptr,int *qtd){
   Pessoa aux;
   int qtdUsuarios = 0, i;
   /**
    * 1. ler para uma memoria aux -- Pessoa aux
    * 2. Alocar a Memoria
    * 3. Passar da Memoria aux para a memoria alocada
   **/
   // Cadastrando a pessoa
   printf("Quantos usuarios deseja inserir: ");
   scanf("%d", &qtdUsuarios);

   // Condição de parada
   for (i = (*qtd); i < (*qtd) + qtdUsuarios; i++) {
      // 1. Passo
      printf("Digite o Codigo: ");
      scanf("%d", &aux.codigo);
      printf("Digite o nome: ");
      scanf(" %(SIZE-1)[^\n]", aux.nome);
      printf("Digite a idade: ");
      scanf("%d", &aux.idade);
      printf("Digite a altura: ");
      scanf("%f", &aux.altura);
      printf("Digite o peso: ");
      scanf("%f", &aux.peso);
      // aux está preenchido

      // 2. Passo
      (*ptr) = (Pessoa *) realloc((*ptr), (*qtd + 1) * sizeof(Pessoa));
      if ((*ptr) == NULL) {
         printf("ERROR ALLOCATION!! :( \n");
         exit(-1);
      }
   }
   (*qtd) = qtdUsuarios;
}

int main() {
   Pessoa *usuario = NULL;
   int qtd = 0, verif = 0;

   //Funcao que cadastra pessoas
   /**
    * Nessa ocasião estamos enviando um ponteiro, logo é preciso usar ponteiro duplo no parametro 
    */
   do {
      printf("--- Usuarios LTDA ---");
      menu();
      scanf("%d", &verif);
      switch (verif)
      {
         // Adicionar Usuario
         case 1:
         cadastraPessoa(&usuario, &qtd);

         // Sair do programa
         case 0:
         exit(1);
         break;

      }

   } while (verif != 0);
     

   return 0;
}