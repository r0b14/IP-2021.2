/* Invertendo o conteudo de uma string*/
#include <stdio.h>
#include <string.h>

#define SIZE 6

int main() {

   char name[SIZE] = "Robson";
   char nameinvet[SIZE];
   int i, j = 0;

   for(i = strlen(name) - 1 ; i >= 0; i-- ) {
      nameinvet[j] = name[i];
      j++; 
   }
   // inserindo o caracter nulo ao final da string invertida
   nameinvet[j] = '\0';
   printf("nameinvert = %s\n", nameinvet);

   system("pause");
   /**
      // Esse caso so muda a apresentação na tela
      for(int i = strlen(name) - 1; i >= 0; i--) {
         printf("%c", name[i]);
      }
      printf("\n");
      // Verificando erro de compilador
      int num = strlen(name);
      printf("quantidade que o strlen demonstra = %d", num);
   **/


   return 0;
}