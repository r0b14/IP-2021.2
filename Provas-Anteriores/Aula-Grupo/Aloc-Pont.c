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
   printf("1 - Cadastrar Usuario\n");
   printf("2 - Mostrar Usuarios\n");
   printf("3 - Excluir Usuario\n");
   printf("0 - Exit Program\n");
}

void cadastrarPessoas(Pessoa **ptr,int *qtd){
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
      scanf(" %29[^\n]", aux.nome);
      printf("Digite a idade: ");
      scanf("%d", &aux.idade);
      printf("Digite a altura: ");
      scanf("%f", &aux.altura);
      printf("Digite o peso: ");
      scanf("%f", &aux.peso);
      // aux está preenchido

      // 2. Passo
      (*ptr) = (Pessoa *) realloc((*ptr), (i + 1) * sizeof(Pessoa));
      if ((*ptr) == NULL) {
         printf("ERROR ALLOCATION!! :( \n");
         exit(-1);
      }

      // 3. Passo
      // Ptr na posicao i recebe o valor de aux.
      (*ptr)[i] = aux;
   }

   (*qtd) = qtdUsuarios;
}

void mostrarPessoas(Pessoa *pessoas, int *qtd) {
   int i;
   for(i = 0; i < (*qtd); i++ ) {
      printf("Usuario %d", i+1);
      printf("Codigo: %d\n", pessoas[i].codigo);
      printf("Nome: %s\n", pessoas[i].nome);
      printf("Idade: %d\n", pessoas[i].idade);
      printf("Altura: %.2f\n", pessoas[i].altura);
      printf("Peso: %.2f\n\no", pessoas[i].peso);
   }
}

void excluindoPessoa(Pessoa *pessoas, int *qtd) {
   int i, posicao, tamVet;
   printf("Digite qual a posicao do elemento que voce deseja excluir: ");
   scanf("%d", &posicao);

   tamVet = sizeof(pessoas);
   // numero de indices que possuo == 0
   if (tamVet == 0)
   {
      return NULL; // Nesse caso não há o que remover.
   }
   // indice que desejo excluir >= numero de indices que possuo
   if (posicao >= tamVet)
   {
      return ; // Index inválido.
   }
   /**
    * Sobrepomos aquele elemento
    * Vai andar de forma crescente, só que sobreescrevendo os elementos.
    **/
   for (int i = index; i < *nElementos - 1; i++)
   {
      v[i] = v[i + 1];
      printf("%d ", v[i]);
   }
   /* Realocamos */
   int *temp = v;
   temp = (int *)realloc(temp, (*nElementos - 1) * sizeof(int));
   if (temp == NULL && *nElementos != 1)
      exit(1);

   (*nElementos)--;

   return temp; // Retornamos o ponteiro

}

int main() {
   Pessoa *usuario = NULL;
   int qtd = 0, verif, posicao = 0;

   // Funcao que cadastra pessoas
   // Nessa ocasião estamos enviando um ponteiro, logo é preciso usar ponteiro duplo no parametro 
   do {
      printf("--- Usuarios LTDA ---\n\n");
      menu();
      scanf("%d", &verif);
      switch (verif)
      {
         // Adicionar Usuario
         case 1:
         cadastrarPessoas(&usuario, &qtd);
         break;
         // Mostrar as pessoas cadastradas
         case 2:
         mostrarPessoas(usuario, &qtd);
         break;
         // Excluindo usuario
         case 3:
         excluindoPessoa(usuario, &qtd);
         break;
         // Sair do programa
         case 0:

         break;

         default:
         printf("ERROR!\n\n");
         exit(-1);
         break;
      }

   } while (verif != 0);

   free(usuario);

   return 0;
}