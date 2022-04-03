/* Questão 01 */
#include <stdio.h>

int main() {

   char c = 'a';
   char *pc = &c;

   printf("\n\n");
   // Letra 1A)
   printf("Letra 1A\n");
   printf("O endereco c: %p\n", &c);
   printf("O valor c: %c\n", c);

   // Letra 1B)
   printf("\nLetra 1B\n");
   printf("O valor de pc: %p\n", pc);
   printf("O valor guardado no end apontado pc: %c\n", *pc);

   // Letra 1C)
   printf("\nLetra 1C\n");
   printf("O endereco de pc: %p\n", &pc);

   // Letra 1D)
   printf("\nLetra 1D\n");
   printf("O endereco do valor guardado no ende apont pc: %p\n", &(*pc));
   printf("O valor guardado no ende pc: %p\n", *(&pc));

   printf("\n\n");
   return 0;
}

   /**
    * Letra 1E)
    * 
   **/