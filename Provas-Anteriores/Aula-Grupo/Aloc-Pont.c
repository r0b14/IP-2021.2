#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
   int codigo;
   char nome[40];
   double preco;
   int qt;
} Pessoa;

void cadastrarPessoas(Pessoa **ptr, int *qtd) {
   Pessoa aux;
   Pessoa *p = NULL;

   // ler para uma memoria aux
   // Alocar a memoria
   // Passar da memoria aux pra memoria alocada
   printf("Entre com o codigo\n");
   while (scanf("%d", &aux.codigo) && (aux.codigo != 0)) {
      printf("Entre com o nome\n");
      scanf(" %39[^\n]", aux.nome);
      printf("Entre com o preco\n");
      scanf("%lf", &aux.preco);
      printf("Entre com a quantidade\n");
      scanf("%d", &aux.qt);

      // Realizando a alocação
      (*ptr) = (Pessoa *) realloc((*ptr), (*qtd + 1) * sizeof(Pessoa));
      if ((*ptr) == NULL) {
         printf("Erro ao alocar\n");
         exit(-1);
      }

      (*ptr)[*qtd] = aux; // *ptr[qtd] = aux
      (*qtd)++; // 
      // p[x] = 10;
      printf("Entre com o codigo\n");
   }

   //***P -> **p **p -> *p *p -> p p p  p
   // p = &a;
   //(*p) = 100;
}

int main()
{
   Pessoa *ptrPessoa = NULL;
      int qtd = 0, i;

   // Cadastrando pessoas em um ponteiro dinamico 
   cadastrarPessoas(&ptrPessoa, &qtd);

   printf("%d pessoas foram lidas\n", qtd);
   for (i = 0; i < qtd; i++) {
      printf("Nome: %s\n", ptrPessoa[i].nome);
      printf("Codigo: %d\n", ptrPessoa[i].codigo);
      printf("Preco: %.2lf\n", ptrPessoa[i].preco);
      printf("QTD: %d\n", ptrPessoa[i].qt);
   }

   free(ptrPessoa);

   return 0;
}