/* Invertendo o conteudo de uma string*/
#include <stdio.h>
#include <string.h>

#define SIZE 6

int main() {

   char name[SIZE] = "Robson";
   char temp;
   int tam = strlen(name); // Vai receber o tamanho da string
   int i; 

   for(i = 0 ; i < tam/2 ; i++ ) {
      temp = name[i]; // Guardou temporariamente o valor da primeira posicao
      name[i] = name[tam - 1 - i]; // Acesando o ultimo valor dentro da string
      name[tam - 1 - i] = temp; // Repassou o valor da primeira para ultima
   }
   printf("nameinvert = %s\n", name);

   system("pause");

   return 0;
}