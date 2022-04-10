#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 30

typedef struct {
   char nome[SIZE];
   int ataque;
   int defesa;
} Pokemon;

typedef struct {
   char nome[SIZE];
   Pokemon *pokebola;
   int nPokemons;
   int pontuação; // Vai depender da batalha
} Treinador;

void *addTreinador(Treinador *treinadores, int *qtdCompetidores) {
   // incrementar competidores de forma dinamica
   for (int i = 0; i < qtdCompetidores; i++) {
      scanf(" %s", treinadores[i].nome); // Nome do competidores
      scanf(" %s", treinadores[i].pokebola); // Nome do pokemon
      scanf("%d", treinadores[i].nPokemons); //Numero de pokemons
   }
}

void Treinador *addPokemon(Treinador *treinadores, char *nomeTreinador, Pokemon pokemon, int qtdCompetidores) {
   
}

void Treinador *removeTreinador(Treinador *treinadores, int *qtdCompetidores, int indexTreinador) {

}

char *batalha(Treinador **treinadores, char *nomeCompetidor1, char * nomeCompetidor2, int indexPokemon1, int indexPokemon2 ,int *qtdCompetidores) {

}

void Menu (int status) {
   switch (status) {
      case 1:
      Treinador *compedidor;
      break;
   }
}

int main() {

   Pokemon *pokebola = NULL;



   return 0;
}