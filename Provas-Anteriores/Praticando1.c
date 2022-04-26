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
      prinf("Digite a quantidade: ");
      scanf("%d", aux.qt);
      //Ralizando a alocação
      (*ptr) = (Pessoa *) realloc((*ptr), (*qtd + 1) * sizeof(Pessoa));
      if((*ptr) == NULL) {
         printf("Error for alocacion\n");
         exit(-1);
      }

      (*ptr)[*qtd] = aux;
   }
   
}

int main() {
   Pessoa *ptrPessoa = NULL;


   return 0;
}