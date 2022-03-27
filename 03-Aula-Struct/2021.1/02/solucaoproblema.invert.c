#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Função sprintf(variavel-que-recebe, "%tipo", variavel-que-transfere)
 */
//sprintf(entradaStr, "%d", entrada); -> vamos executar o programa sem a função.

int main() {

   int entrada, i = 0, j;
   char entradaStr[10];
   printf("Digite a entrada ");
   scanf("%d", &entrada);

   // Resolvendo problema de inversão de numero na hora da conversão
   while (entrada != 0) {
      i = i + 1; // Tamanho do numero da entrada
      for (j = i; j > 0; j--) { // Deslocamento a direita 
         entradaStr[j] = entradaStr[j - 1];
      }
      entradaStr[0] = (entrada % 10 + 48);
      entrada /= 10;
   }
   printf("Entrada como string: [%s]\n", entradaStr);
   return 0;
}