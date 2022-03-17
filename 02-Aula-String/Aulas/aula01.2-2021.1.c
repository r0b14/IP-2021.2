/* Aula sobre string 2021.1 */
#include <stdio.h>
/**
 * String = Sequencia de caracteres
 * ' ' -> Usado para careteres.
 * " " -> Usado para strings.
 * Para localizarmos o fim da string usamos o '\0' -> caracter nulo.
 * '\0' -> caracter nulo | Fim da string.
 **/

int main() {

   char letra = 'A'; // Aqui é um caractere
   char nome[50] = {'R', 'o', 'b', 's', 'o', 'n', '\0'}; // "Robson"
   int i;

   printf("Letra= %c\n", letra);

   printf("Nome= %s\n", nome); // Dentro do %s existe um for -> percorra esse vetor e mostre caracter por caracter dentro dele.

   printf("Nome c for= ");
   for (i = 0; nome[i] != '\0'; i++) {
      printf("%c", nome[i]);
   }

   printf("\n");

   return 0;
}