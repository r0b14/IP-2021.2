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
   int quantidade, i = 0;
   printf("Quantos familiares vc deseja adiciona: ");
   scanf("%d", &quantidade);
   (*qtdFamiliar) += quantidade;
   familiar = realloc(familiar, (*qtdFamiliar) * sizeof(Pessoa)); // Alocando a quantidade de pessoas a serem inseridas
    if (familiar == NULL) // Verificando a alocação
   {
      printf("ERROR ALLOCATION!! :( \n");
      exit(-1);
   }
   for (i = (*qtdFamiliar) - quantidade ; i < (*qtdFamiliar) ; i++)
   {
      printf("Informacoes do %dº Familiar\n", i + 1);
      printf("Nome: ");
      scanf(" %29[^\n]", familiar[i].nome);
      printf("Idade: ");
      scanf("%d", &familiar[i].idade);
      familiar[i].datanascimento = (int *) malloc(3 * sizeof(int));
      if (familiar[i].datanascimento == NULL) {
         printf("ERROR ALLOCATION!! :( \n");
         exit(1);
      }
      printf("Data de nascimento= ");
      scanf("%d/%d/%d", &familiar[i].datanascimento[0], &familiar[i].datanascimento[1], &familiar[i].datanascimento[2]);
      printf("Altura ");
      scanf("%f", familiar[i].altura);
   }
   //i += (*qtdFamiliar);
   return familiar;
}

int main()
{
   Pessoa *familia = NULL;
   int verif, tam, qtdFamiliar = 0;
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
            familia = adcFamiliar(familia, &qtdFamiliar);
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
   } while ( verif != 0 ); 

   //Liberando memórias
   for(int i = 0; i < qtdFamiliar; i++) {
      free(familia[i].datanascimento);
   }
   free(familia);

   system("pause");
   return 0;
}