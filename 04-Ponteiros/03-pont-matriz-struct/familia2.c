#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 30

typedef struct {
   char nome[29];
   int idade;
   float altura;
} Pessoa;

int main() {

   Pessoa *familia;
   int verif, tam, inserido = 0;
   printf("Digite 0 para poder sair do programa");
   while ( scanf ("%d", &verif) != 0 ) {
      inserido += 1;
      familia = (Pessoa *) malloc(1 * sizeof(Pessoa));
   }


   return 0;
}