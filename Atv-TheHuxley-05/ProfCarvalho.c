#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 20
typedef struct {
   char nome[SIZE];
   char tipo[3];
   int ataque;
   int defesa;
} Pokemon;

int main() {

   int quantPokemon, i, verif;
   Pokemon pokemons[quantPokemon];

   scanf("%d", &quantPokemon);
   while (verif != 0 )
   {
      for (i = 0 ; i < quantPokemon ; i++) {
         scanf(" %s", pokemons[i].nome);
         scanf(" %s", pokemons[i].tipo);
         scanf("%d", pokemons[i].ataque);
         scanf("%d", pokemons[i].defesa);
      }
      printf("luta\n");
      scanf(" %s vs %s", );
   }
   scanf("%d", &verif);

   printf("");

   return 0;
}