#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * Função sprintf(variavel-que-recebe, "%tipo", variavel-que-transfere)
 * 
 */
//sprintf(entradaStr, "%d", entrada); -> vamos executar o programa sem a função.

int main() {

   int entrada, i = 0;
   char entradaStr[10];
   printf("Digite a entrada ");
   scanf("%d", &entrada);

   // entrada => entradaS
   while (entrada != 0) {
      entradaStr[i] = (entrada % 10 + 48);
      /**
       * Entrada = valor que o usuário vai inserir = 152 
       * entrada % 10 = nesse caso vai pegar o resto da div entre 152 % 10 e somar mais 48.
       * 48 = caracter 0 ASCII
       * A string é montada de trás p/ frente nesse caso vai ficar 251
       */
      entrada /= 10;
      //i++;
   }
   entradaStr[i] = '\0'; // Inserindo o caracter nulo a string
   // Resolvendo a inversão do numero
   printf("Entrada como string: %s\n", entradaStr);
   return 0;
}