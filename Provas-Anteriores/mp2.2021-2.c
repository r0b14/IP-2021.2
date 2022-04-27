#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 30

typedef struct {
   char nome[SIZE];
   int ataque;
   int defesa;
} Pokemon; // Estrutura do tipo pokemon

typedef struct {
   char nome[SIZE];
   Pokemon *pokebola; // ponteiro para estrutura
   int nPokemons;
   int pontuacao;
} Treinador; // Estrutura do tipo treinador

//       vai receber o endereço de lstTreinadores, vai incrementar a qtdCompetidores
Treinador *addTreinador(Treinador *treinadores, int *qtdCompetidores)
{

   Treinador aux; // Variável auxilixar para a funcao
   Treinador *pontAux = treinadores; // pontAux recebe o endereço do ponteiro principal do main

   // Valor temporário para o usuario que for inserido.
   aux.nPokemons = 0;
   aux.pontuacao = 0;
   //recebendo os valores
   printf("Nome: ");
   scanf(" %(SIZE-1)[^\n]", aux.nome);

   // Alocando espaços no ponteiro(vetor);
   pontAux = (Treinador *) realloc(pontAux, ((*qtdCompetidores) + 1) * sizeof(Treinador));
   if(pontAux == NULL) {
      printf("ERROR ALLOCATION!! :( \n)");
      exit(-1);
   }
   treinadores = pontAux; // Treinadores terá tudo o que ele veio lá da main e mais o que conseguiu alocar de pontAux

   treinadores[(*qtdCompetidores)] = aux; // treinadores na posição [*] recebe aux
   /**
    * Vale lembrar que o aux é uma estruta, logo ela vai repleta de informações
    * aux.nPokemons, aux.pontuacao, aux.nome...
   **/

   (*qtdCompetidores)++; // Incrementando a quantidade de competidores

   return treinadores; // retorna treinadores para o main.
}

int main() {

   Treinador *lstTreinadores = NULL;
   int qtdCompetidores = 0, i, j;
   int opcao;

   // Vai executar pelo menos uma vez, por isso o uso do do... while
   do
   {
      //Precisa ser feito um menu
      printf("\n----- POKEDEX -----\n");
      printf("1....Adicionar Competidores\n");
      printf("2....Adicionar Pokemons\n");
      printf("3....Batalhar\n");
      printf("0....Sair\n");
      printf("Opção: ");
      scanf("%d", &opcao);

      //Verificando a entrada do usuário
      switch (opcao)
      {
         case 1:

         // Funcao para adicionar o competidor
         lstTreinadores = addTreinador(lstTreinadores, &qtdCompetidores);

         break;

         case 2:
         // Funcao para adicionar pokemons
         break;

         case 3:
         // Funcao para Batalhar
         break;

         case 0:
         // Funcao de saida/parada
         break;

         default:
         printf("ERROR!\n\n");
         exit(-1);
         break;
      }

   } while(opcao != 0); // Verifica, caso seja verdadeiro, volta.

   return 0;
}