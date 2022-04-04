/* Aula 46 - Introducao a String|Vetores de caracteres */
#include <stdio.h>
#include <string.h>
/**
 * Caractere -> 'a' => Quando declaramos um caracteres, usamos [' ']
 * Conjunto de Caracteres -> 'Robson Thiago' => 
 * 1. A string nos permite usarmos a possibilidade de frases, txt e etc.
 * 2. É oreciso usar a biblioteca <string.h>
 */
int main() {

   char teste[] = {'b', 'r', 'a', 's', 'i', 'l'}; //Jogar um conjunto de Caracteres dentro do vetor

   int i;
   for(i = 0 ; i < 6 ; ++i){
      printf("%c", teste[i]);
   }

   printf("\n");
   return 0;
}