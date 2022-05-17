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
void cadastrarPessoas(Pessoa **ptrPessoa, int *qtd) {
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

      // 2. Realizando a alocação -> vamos usar quem ptrPessoa está apontando, nesse caso ptrPessoa(main).
      (*ptrPessoa) = (Pessoa *) realloc((*ptrPessoa), (*qtd + 1) * sizeof(Pessoa));
      if ((*ptrPessoa) == NULL) {
         printf("Error for alocation\n");
         exit(-1);
      }

      // 3. Passando da memoria aux para memoria do main
      (*ptrPessoa)[*qtd] = aux; // na posicao inserindo uma pessoa
      (*qtd)++; // Incrementou a quantidade de pessoa
   }
}

void gerarArquivo(Pessoa *ptrPessoa, int *qtdPessoas) {
   /**
    * W = Escrever no arquivo | ele apaga o que tinha antes e escreve o que mando
    * A = Adicionar o que desejo ao final do arquivo
    * R = Leitura do arquivo.
   **/
   // Funcao *fopen* abri o arquivo
   FILE *arq = fopen("Pessoas.bin", "wb"); // Criar e abrir o arquivo
   if (arq == NULL) {
      printf("Error ao abrir o arquivo\n");
      exit(-1);
   }
   /**
    * 1 Parametro -> De onde voce quer escrever
    * 2 Parametro -> O tamanho que vc quer escrever
    * 3 Parametro -> Quantas vezes vai escrever esse tamanho
    * 4 Parametro -> Onde voce quer escrever
    */
   // Funcao *fwrite* escreve no arquivo
   // Escrevendo no arquivo
   fwrite(ptrPessoa, sizeof(Pessoa), qtdPessoas, arq);

   // Fechando o arquivo
   fclose(arq);
}

int main() {

   Pessoa *ptrPessoa = NULL;
   Pessoa *pLidas = NULL; // Pessoas que foram lidas no arquivo
   int qtd = 0; // Por ser uma estrutura dinâmica, precisamos usar um contador => aumenta o diminui
   int i, lidas = 0;

   // Mostrando as opções aos usuarios
   menu();

   // Cadastrando pessoas em um ponteiro dinamico
   cadastrarPessoas(&ptrPessoa, &qtd); // Sempre que passar o endereço de algo, usar um * na funcao

   // Gerando arquivo binario
   /**
    * A intenção é só abastecer o arquivo
   **/
   gerarArquivo(ptrPessoa, &qtd);

   /**
    * é preciso pegar o que tem no arquivo e passar para um ponterio.
   **/
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