/* CTRL H */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Limitando a uma string de 1000 caracteres
#define SIZE 1000

typedef struct {
   char palavras[SIZE];
} Palavra;

void inserirPalavra (Palavra **inseriPalavra, int *qtdPalavras, FILE *palavras) {
   // Variaveis auxiliares
   int aux, i;
   Palavra pontaux;
   // Recebendo o usuario a qtd de palavras
   printf("Quantas palavras quer adicionar: ");
   scanf("%d", &aux);
   (*qtdPalavras) = (*qtdPalavras) + aux;

   for (i = (*qtdPalavras) - aux; i < *(qtdPalavras); i++) {
      (*inseriPalavra) = (Palavra *) realloc((*inseriPalavra), (aux + 1) * sizeof(Palavra));
      if(inseriPalavra == NULL) {
         printf("Error for alocacion\n");
         exit(-1);
      }
      printf("Digite a %dº Palavra", i + 1);
      scanf(" %(SIZE-1)[^\n]", pontaux.palavras);
      (*inseriPalavra)[i] = pontaux;
   }

}

void gerandoArquivo(Palavra *ptr, int qtd) {

   // Criando arquivo
   FILE *palavras = fopen("Palavras.txt", "w");
   if (palavras == NULL) {
      printf("Erro ao Criar o Arquivo");
      fclose(palavras);
      exit(-1);
   } else {
      printf("\nArquivo palavras.txt criado\n");
   }
   fwrite(ptr, sizeof(Palavra), qtd, palavras);

   // Fechando o arquivo
   fclose(palavras);
}

void mostrarPalavras(Palavra **ptr, int *lidas) {
   Palavra aux;
   // Lendo arquivo
   FILE *arq = fopen("Palavras.tx", "r");
   if (arq == NULL) {
      printf("error for alocacion\n");
      exit(-1);
   }

   // Escrevendo para mostrar
   while ( fread(&aux, sizeof(Palavra), 1, arq) != 0)
   {
      (*ptr) = (Palavra *) realloc((*ptr), (*lidas + 1) * sizeof(Palavra));
      if ((*ptr) == NULL) {
         printf("error for alocacion\n");
         fclose(arq);
         exit(-1);
      }

      (*ptr)[*lidas] = aux; // alterando o valor de ptr na posição lidas => ptr[lidas]
      (*lidas)++; // Incrementando o valor em lidas
   }

   // Mostrando o que tem no arquivo
   for(int i = 0; i < lidas; i++) {
      printf("%s\n", (*ptr)[i].palavras);
   }

   //Fechando arquivo
   fclose(arq);
}

void excluirPalavra(Palavra *ptrAux, int *qtdPalavras) {

   char auxPalavra;
   int i = 0;
   printf("Qual palavra voce quer excluir: ");
   scanf(" %(SIZE-1)[^\n]", auxPalavra);
   for(i = 0; i < qtdPalavras; i++)
   {
      if (strcmp((*ptrAux)[i], auxPalavra) == 0) {
         (*ptrAux)[i] =  (*ptrAux)[i+1];
      }

   }

}


int main() {

   FILE *palavras = NULL;
   Palavra *palavra = NULL;
   int verif, qtd = 0;

   //fwrite(lista, sizeof(int), *numQtd, palavras);

   do {
      // Menu
      printf("\n --- MENU ---\n");
      printf("1 - Inserir Palavra\n");
      printf("2 - Excluir Palavra\n");
      printf("3 - Mostrar as Palavras\n");
      printf("0 - Sair do Programa\n");
      printf("Opcao: ");
      scanf("%d", &verif);

      // Verificando
      switch(verif)
      {
         case 0:
            // Sair do programa
            printf("Saindo do programa...\n");
         break;

         case 1:
            // Inserir uma palavra ao arquivo txt
            printf("Quantas palavras voce quer cadastrar: ");

            printf("Digite a palavra: ");
            scanf("%d", &qtd);
            inserirPalavra(&palavra, &qtd, palavras);
            gerandoArquivo(palavra, &qtd);
         break;

         case 2:
            // Excluir a palavra do arquivo txt e apresentar quantas vezes ela estava no arquivo
            excluirPalavra(palavra, &qtd);
         break;

         case 3:
            // Mostrar as palavras que tem no arquivo palavras.txt
            mostrarPalavras(palavra, &qtd);
         break;

         default:
            // Caso nenhuma das entradas seja reconhecida
            printf("Digite um numero valido, caso contrario digite 0.\n");
         break;
      }

   } while (verif != 0);

   free(palavra);
   fclose(palavras);

  return 0;
}