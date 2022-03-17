/* Ambrosio's Bus Company */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50
#define TOTAL 44

typedef struct {
   int ticket;
   char data[20];
   char cidadeOrigem[SIZE];
   char cidadeDestino[SIZE];
   char horario[20];
   int poltrona;
   int idade;
   char nome[SIZE];
} Passageiro;

int main(){

   Passageiro passageiros[TOTAL];
   int i = 0, j, cont = 0, temp = 0, somaIdades = 0;
   float media = 0;

   while ((scanf("%d", &temp) != -1) && cont < 44) {

      passageiros[cont].ticket = temp;
      scanf(" %s", passageiros[cont].data);
      scanf(" %49[^\n]", passageiros[cont].cidadeOrigem);
      scanf(" %49[^\n]", passageiros[cont].cidadeDestino);
      scanf(" %s", passageiros[cont].horario);
      scanf("%d", &passageiros[cont].poltrona);
      scanf("%d", &passageiros[cont].idade);
      scanf(" %49[^\n]", passageiros[cont].nome);

      somaIdades += passageiros[cont].idade ;
      temp = 0;
      cont++;
   }

   media = (float)somaIdades / cont;

   for (i = 0; i < cont; i++) {
      if(passageiros[i].poltrona % 2 == 0 && passageiros[i].idade > media){
         printf("%s\n", passageiros[i].nome);
      } // (81) 98942-2067 tatajaq@hotmail.com
   }

   return 0;
}