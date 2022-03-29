#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50
/**
 * Quanto estamos procurando um palavra que seja uma das quais queremos encontrar no caça palavras
 * temos que verificar a primeira palavra -> Palavra[0]
 *    Precisamos ter um variavel[indice] que ajuda a varrer a plavra 
**/
/**
 * if(cacaPalavras[i][j+k] != palavra[k]) -> vai procurar a letra da E -> D
 * if(cacaPalavras[i][j-k] != palavra[k]) -> vai procurar a letra da E <- D
 * if(cacaPalavras[i+k][j] != palavra[k]) -> vai procurar a letra da C -> B
 * if(cacaPalavras[i-k][j] != palavra[k]) -> vai procurar a letra da C <- B
 * if(cacaPalavras[i+k][j+K] != palavra[k]) -> vai procurar a letra da Diagonal Principal
**/ 
int main() {
   // Se fomos fazer um caça palavras de string precisamos inserir mais um indice 
   // Ao inves ter usarmos um caracter por linha, vamos ter uma palavra
   char cacaPalavras[SIZE][SIZE];
   char palavra[20];
   int i, j, k;

   for( i = 0; i < SIZE ; i++ ) {
      for( j = 0; j < SIZE ; j++ ) {
         //Achei a 1a letra da palavra
         if(cacaPalavras[i][j] == palavra[0]){
            // Resto da palavra confere com a que o usuario inseriu?
            for( k = 0; palavra[k] != '\0' ; k++ ){
               if(cacaPalavras[i][j+k] != palavra[k]){
                  break;
               }
               else if(palavra[k] != '\0'){
                  printf("Encontrei na posicao %d, %d\n", i+1, j+1);
               }
            }
         }
      }
   }
   return 0; 
}