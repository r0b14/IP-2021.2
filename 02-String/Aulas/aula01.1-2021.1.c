/* Aula sobre string 2021.1 */
#include <stdio.h>
/**
 * Podemos apresentar o char tanto como um caracter ou como um numero (ASCII)
 * Na string reutilizados os conceitos de vetores.
 * String = Sequencia de caracteres
 * ' ' -> Usado para careteres.
 * " " -> Usado para strings.
 */

int main() {

   char letra = 'A'; // Aqui é um caractere
   char nome[50] = "Robson Thiago"; //Nome é uma string ou um vetor de 50 caracteres
   int vet[50], i;

   printf("Letra= %c\n", letra);

   printf("Nome= %s\n", nome); // Dentro do %s existe um for -> percorra esse vetor e mostre caracter por caracter dentro dele.

   /*
   for (i = 0; i < 50; i++){
      printf("Vet[%d]= %d\n", i+1, vet[i]);
   }
   */
   return 0;
}