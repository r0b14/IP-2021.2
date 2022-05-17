#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
   int codigo;
   char nome[40];
   double preco;
   int qtd;
} Pessoa;

void menu() {
   printf(" --- Cadastra Pessoas --- \n");
   printf("1 - Cadastrar Pessoas\n");
   printf("2 - Vizualizar Pessoas\n");
   printf("0 - Exit Programa\n");
}
// Void porque não preciso retornar nada na main e sim só na memória
void cadastrarPessoas(Pessoa **ptrAux, int *qtd) {
   Pessoa aux; // Essa estrutura é local, a partir daí é que inserimos no ponteiro
   /**
    * 1. ler para uma memoria aux
    * 2. Alocar a Memoria
    * 3. Passar da Memoria aux para a memoria alocada
   **/
   /**
      p = &a -> P está recebendo o endereço de a
      (*p) = 100; -> quem está sendo apontado por p recebe o valor de 100
   **/
  // 1. Lendo e inserindo em uma memoria aux
   while ( scanf("%d", &aux.codigo) && (aux.codigo != 0))
   {
      printf("Nome: ");
      scanf(" %39[^\n]", aux.nome);
      printf("Preço: ");
      scanf("%lf", &aux.preco);
      printf("Qtd: ");
      scanf("%d", &aux.qtd);

      // 2. Realizando a alocação -> vamos usar quem ptrAux está apontando, nesse caso ptrPessoa(main).
      (*ptrAux) = (Pessoa *) realloc((*ptrAux), (*qtd + 1) * sizeof(Pessoa));
      if ((*ptrAux) == NULL) {
         printf("Error for alocation\n");
         exit(-1);
      }

      // 3. Passando da memoria aux para memoria do main
      (*ptrAux)[*qtd] = aux; // na posicao inserindo uma pessoa
      (*qtd)++; // Incrementou a quantidade de pessoa
   }
   
}

int main()
{
   Pessoa *ptrPessoa = NULL;
   int qtd = 0; // Por ser uma estrutura dinâmica, precisamos usar um contador => aumenta o diminui
   int i;

   // Mostrando as opções aos usuarios
   menu();

   // Cadastrando pessoas em um ponteiro dinamico
   cadastrarPessoas(&ptrPessoa, &qtd); // Sempre que passar o endereço de algo, usar um * na funcao

   // Mostrando as pessoas que foram cadastradas (aloc dinamica)
   printf("%d pessoas foram lidas\n", qtd);
   for (i = 0; i < qtd; i++) {
      printf("Nome: %s\n", ptrPessoa[i].nome);
      printf("Codigo: %d\n", ptrPessoa[i].codigo);
      printf("Preco: %.2lf\n", ptrPessoa[i].preco);
      printf("QTD: %d\n", ptrPessoa[i].qtd);
   }

   free(ptrPessoa);

   return 0;
}