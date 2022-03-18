#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 21

typedef struct {
   char nome[SIZE - 1];
   char tipo[3];
   int ataque;
   int defesa;
} Pokemon;

int main() {

   int quantPokemon, i, verif = 1;
   char verfstatusf, pokemon1, pokemon2;
   int defesapokemon1 = 0, ataquepokemon1 = 0, defesapokemon2 = 0, ataquepokemon2 = 0;
   scanf("%d", &quantPokemon); // Recebendo a quantidade de pokemons

   Pokemon pokemons[quantPokemon];
   for (i = 0 ; i < quantPokemon ; i++) {
      scanf(" %s", pokemons[i].nome);
      scanf(" %s", pokemons[i].tipo);
      scanf("%d", &pokemons[i].ataque);
      scanf("%d", &pokemons[i].defesa);
   }
   /**
    * Parte 2 -> List ou luta
    * ## Luta ##
    */
   while ( verif != 0 && verif > 0) {
      scanf(" %s", verfstatusf); // Verificando se e listagem ou luta
      // LUTA
      if ( strcmp(verfstatusf, "luta") == 0 ) {
         scanf(" %s vs %s", pokemon1, pokemon2);
         /// Varrendo o vetor para poder extrair os valores dos ataque e defesa
         for ( i = 0 ; i < quantPokemon ; i++ ) {
            // Encontrando o pokemon1 para poder pegar os valores dos poderes
            if ( strcmp(pokemon1, pokemons[i].nome) == 0 ) { // Encontrodou dentro do vetor o nome do pokemon1
               defesapokemon1 = pokemons[i].defesa;
               ataquepokemon1 = pokemons[i].ataque;
            }
            // Encontrando o pokemon2 para poder pegar os valores dos poderes
            if ( strcmp(pokemon2, pokemons[i].nome) == 0) {
               defesapokemon2 = pokemons[i].defesa;
               ataquepokemon2 = pokemons[i].ataque;
            }
         }
         // RESULTADO
      }
      // LISTA
      else if ( strcmp(verfstatusf, "list ele") == 0 ) {
         for ( i = 0 ; i < quantPokemon ; i++) {
            if (pokemons[i].tipo == "ele") {
               printf("Pokemon %d: %s", i+1, pokemons[i].nome);
               printf(" ataque: %d", pokemons[i].ataque);
               printf(" defesa: %d", pokemons[i].defesa);
            }
         }
      }
      else if ( strcmp(verfstatusf, "list fog") == 0 ) {
         for ( i = 0 ; i < quantPokemon ; i++) {
            if (pokemons[i].tipo == "fog") {
               printf("Pokemon %d: %s", i+1, pokemons[i].nome);
               printf(" ataque: %d", pokemons[i].ataque);
               printf(" defesa: %d", pokemons[i].defesa);
            }
         }
      }
      
      scanf("%d", &verif);
   }

   if (ataquepokemon1 - defesapokemon2 > ataquepokemon2 - defesapokemon1) {
      printf("%s deitou %s na porrada\n", pokemon1, pokemon2);
   } else if ( ataquepokemon2 - defesapokemon1 > ataquepokemon1 - defesapokemon2 ) {
      printf("%s deitou %s na porrada\n", pokemon2, pokemon1);
   } else {
      printf("parece que temos um empate\n");
   }

   return 0;
}