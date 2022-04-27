#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 30

typedef struct {
   int codigo;
   char nome[SIZE];
   double preco;
   int qt;
} Pessoa;   


void cadastrarPessoas(Pessoa **ptr, int *qtd) {
   //qtd = 0 e vai incrementando
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
    * W = Escrever no arquivo | ele apaga o que tinha antes e escreve o que mando
    * A = Adicionar o que desejo ao final do arquivo
    * R = Leitura do arquivo.
   **/
   // Funcao *fopen* abri o arquivo
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
   // Escrevendo no arquivo
   fwrite(ptr, sizeof(Pessoa), qtd, arq);

   // Fechando o arquivo
   fclose(arq);
}

void lerCentral(Pessoa **ptr, int *lidas) {
   Pessoa aux;
   FILE *arq = fopen("central.bin", "r");
   if (arq == NULL) {
      printf("error for alocacion\n");
      exit(-1);
   }
   //            1       2            3   4
   while (fread(&aux, sizeof(Pessoa), 1, arq) != 0)
   {
      /**
       * 1 -> onde voce quer salvar o que ler
       * 2 -> qual o tamanho que queres ler
       * 3 -> quantas vezes voce quer ler esse tamanho
       * 4 -> De onde voce quer ler
      **/
     (*ptr) = (Pessoa *) realloc((*ptr), (*lidas + 1) * sizeof(Pessoa));
     if ((*ptr) == NULL) {
        printf("error for alocacion\n");
        exit(-1);
     }
   
      (*ptr)[*lidas] = aux; // alterando o valor de ptr na posição lidas => ptr[lidas]
      (*lidas)++; // Incrementando o valor em lidas
   }

   //Fechando arquivo
   fclose(arq);

}

int main() {
   Pessoa *ptrPessoa = NULL;
   Pessoa *pLidas = NULL;
   int qtd = 0, lidas = 0; // Contadores

   cadastrarPessoas(&ptrPessoa, &qtd);

   //Gerando Arquivo binario
   gerarCentral(ptrPessoa, qtd);

   //
   lerCentral(&pLidas, &lidas);

   // Printando o que temos no arquivo.
   printf("\nNo de pessoas: %d\n", lidas);
   for(int i = 0; i < lidas; i++)
   {
      printf("Codigo: %d\n",pLidas[i].codigo);
      printf("Nome: %s\n", pLidas[i].nome);
      printf("Preço: %.3lf\n", pLidas[i].preco);
      printf("Quantidade: %d\n", pLidas[i].qt);
   }

   free(ptrPessoa);
   free(pLidas);

   return 0;
}