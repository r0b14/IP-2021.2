#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 30

typedef struct {
   char nome[29];
   int idade;
   int *datanascimento;
   float altura;
} Pessoa;



int main()
{

   Pessoa *familia = NULL;
   int verif = 1, tam, inserido = 0;
   while ( verif != 4 ) {
      //MENU
      printf("\n\n======= MENU ========\n\n");
      printf("1 - Inserir familiar\n");
      printf("2 - Excluir familiar\n");
      printf("3 - Mostrar familiares\n");
      printf("4 - Sair de Familiares\n");
      scanf ("%d", &verif);
      // Verificando o operador
      switch ( verif )
      {
         case 1:
            /**
            fami
            printf("Digite 0 para poder sair do programa");
            inserido += 1;
            familia = (Pessoa *) realloc( ,1 * sizeof(Pessoa));
            **/
         break;
         case 2:
            // Excluir familiar
         break;
         case 3:
            // Mostrar Familiares
         break;
         case 4:
            // Sair de familiares
         break;
         default:
            system("pause");
            system("cls");
   }


   system("pause");
   return 0;
}