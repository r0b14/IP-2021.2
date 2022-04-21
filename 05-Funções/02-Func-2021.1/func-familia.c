#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 30
typedef struct {
   char nome[30];
   int idade;
   int *datanascimento;
   float altura;
} Pessoa;

Pessoa *adcFamiliar(Pessoa *familiar, int *qtdFamiliar) {
   int quantidade = 0, temp = 0;
   printf("Quantos familiares vc deseja adiciona: ");
   scanf("%d", &quantidade);
   (*qtdFamiliar) += quantidade; 
   for (int i = quantidade + temp; i < ; i++)
   {
      scanf("%d", )
   }
   temp += quantidade
}

int main()
{
   Pessoa *familia = NULL;
   int verif = 0, tam, qtdFamiliar = 0;
   char nomeFamiliar[30];
   // É preciso que o programa rode pelo menos 1 vez
   do {
      //MENU
      printf("\n\n======= MENU ========\n\n");
      printf("1 - Inserir familiar\n");
      printf("2 - Excluir familiar\n");
      printf("3 - Mostrar familiares\n");
      printf("0 - Sair de Familiares\n");
      scanf ("%d", &verif);
      // Verificando o operador
      switch ( verif )
      {
         case 1:
            familia = adcFamiliar(nomeFamiliar, &qtdFamiliar);
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
         case 0:
            // Sair de familiares
      break;
         default:
            printf("ERROR!\n\n");
            system("pause");
            system("cls");
      break;
      }
   } while ( verif != 4 ); 

   system("pause");
   return 0;
}