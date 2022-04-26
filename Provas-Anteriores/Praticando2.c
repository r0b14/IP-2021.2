#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 30

typedef struct{
   int codigo;
   char nome[SIZE];
   double preco;
   int qt;
} Pessoa;


void cadastrarPessoas(Pessoa **ptr, int *qtd) {
   Pessoa aux;

   while (scanf("%d", &aux.codigo) && (aux.codigo != 0))
   {
      printf("Digite o nome: ");
      scanf(" %29[^\n]", aux.nome);
      printf("Digite o preço: ");
      scanf("%lf", &aux.preco);
      printf("Digite a quantidade: ");
      scanf("%d", &aux.qt);

      //Ralizando a alocação
      (*ptr) = (Pessoa *) realloc((*ptr), (*qtd + 1) * sizeof(Pessoa));
      if((*ptr) == NULL) {
         printf("Error for alocacion\n");
         exit(-1);
      }

      (*ptr)[*qtd] = aux;
      (*qtd)++;
   }

}

//Funcao que cria um arquivo binario
void gerarCentral(Pessoa *ptr, int qtd) {
   /**
    * W = Escrever no arquivo
    * A = Adicionar ao final do arquivo
    * R = Leitura do arquivo.
   **/
  // Funcao *fopen* abri o arqivo
   FILE *arq = fopen("central.bin", "wb");
   if (arq == NULL) {
      printf("error for alocacion\n");
      exit(-1);
   }
   /**
    * 1 Parametro -> De onde voce quer escrever
    * 2 Parametro -> O tamanho que vc quer escrever
    * 3 Parametro -> Quantas vezes vai escrever esse tamanho
    * 4 Parametro -> Onde voce quer escrever
    */
   // FUncao *fwrite* escreve no arquivo
   fwrite(ptr, sizeof(Pessoa), qtd, arq);

   fclose(arq);''
}


int main() {
   Pessoa *ptrPessoa = NULL;
   int qtd = 0;

   cadastrarPessoas(&ptrPessoa, &qtd);
   gerarCentral(ptrPessoa, qtd);

   // Printando o que temos na memória.
   printf("\nNo de pessoas: %d\n", qtd);
   for(int i = 0; i < qtd; i++)
   {
      printf("Codigo: %d\n",ptrPessoa[i].codigo);
      printf("Nome: %s\n", ptrPessoa[i].nome);
      printf("Preço: %.3lf\n", ptrPessoa[i].preco);
      printf("Quantidade: %d\n", ptrPessoa[i].qt);
   }

   free(ptrPessoa);

   return 0;
}