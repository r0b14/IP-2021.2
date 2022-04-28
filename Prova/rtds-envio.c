/* Prova 2021.2*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100
#define SIZENAME 20
/**
 * 𝜀=0, letter=1, number=2, any=9, caractere específico=código ASCII
 *
 */

/* Programa que leia um arquivo binário e carregar um vetor dinamico */
typedef struct
{
   int estadoAtual, estadoFuturo, caractereAReconhecer;
   char estadoFinal; // 1 – Sim, 0 - Não
} Transicao;

// Carrega o arquivo
Transicao *carregaAutomato(char *nomeArqBin, long *numEstados)
{
   /**
   // Variaveis auxiliares
   Transicao *varAux = NULL;
   Transicao cont;
   FILE *arq = fopen(strcat(nomeArq, ".bin"), "rb");
   if (arq == NULL)
   {
      printf("Erro ao abrir o Arquivo");
      exit(-1);
   }

   while (fread(&cont, sizeof(Transicao), 1, arq) != ".")
   {
      (*numEstados)++;
      varAux = (Transicao *)realloc(varAux, (*numEstados) * sizeof(Transicao));
      varAux[(*numEstados)] = cont;
   }

   fclose(arq);
   return varAux;
   **/
}

void gravaStatus(FILE *arqSaida, char *entrada, char status)
{

   // Gravar no arqsaida a string entrada seguida da frase e o status.
   char temp[SIZE] = NULL;
   strcpy(temp, entrada);
   // feita a verificação
   if (status == -1)
   {
      strcat(temp, "-(erro de reconhecimento)");
   }
   else if (status == 1)
   {
      strcat(temp, "-(reconhecida)");
   }
   else if (status == 0)
   {
      strcat(temp, "-(não reconhecida)");
   }
   // Escrevendo a saida alterada conforme  o resultado da avalia Transicao
   fputs(temp, arqSaida);
   // Fechando arquivo
   fclose(arqSaida);
}

long *localizaEstado(Transicao *automato, long numEstados, int estadoAtual, int *numEstadosAtuais, char qual)
{

   int vet[numEstados], i;
   if (qual == '0')
   {
      for (i = 0; i < numEstadosAtuais; i++)
      {
         vet[i] = i;
      }
   }
   else if (qual == '1')
   {
      return automato[estadoAtual].estadoFuturo;
   }
   return vet;
}

int avaliaTransicao(Transicao *automato, long numEstados, int estadoAtual, char caractereAtual)
{
}

void reconhece(FILE *arqSaida, Transicao *automato, long numEstados, char *entrada)
{

   int j = 0, verificador = 0;
   // Assumindo como estadoAtual 0 chama avaliaTransicao para cada caracter
   for (j = 0; j < strlen(entrada); j++)
   {
      if (avaliaTransicao(automato, numEstados, 0, entrada[j]) == -1)
      {
         // chama gravaStatus passando status -1
         gravaStatus(arqSaida, entrada, '-1');
         verificador = 1;
      }
   }
   if (!verificador)
   {

      // Apenas cai aqui se a entrada toda foi processada e nao entrou no if acima
      // chama gravaStatus passando status 0
      gravaStatus(arqSaida, entrada, '0');
   }
   else
   {
      // chama gravaStatus passando status 1
      gravaStatus(arqSaida, entrada, '1');
   }

   fclose(arqSaida);
}

int main()
{

   FILE *arqBin = NULL; // Arquivo binario
   FILE *arqTxt = NULL; // Arquivo txt
   Transicao txtInserido;
   char txtUsario[SIZE], *pontTxtUsario = NULL, nomeArquivo[SIZENAME];
   long numEstados = 0; // Numero total de estados dentro do arquivos
   int condicao, i = 0, status;

   // Recebendo o nome do arquivo bin baseado na escolha do usuario
   printf("Digite o nome do arq binario: ");
   scanf(" %(SIZENAME-1)[^\n]", nomeArquivo);

   // Recebendo o nome do arquivo bin baseado na escolha do usuario
   arqBin = fopen(strcat(nomeArquivo, ".bin"), "wb");
   if (arqBin == NULL)
   {
      printf("Erro ao abrir o Arquivo");
      fclose(arqBin);
      exit(-1);
   }

   arqTxt = fopen(strcat(nomeArquivo, ".txt"), "wb");
   if (arqTxt == NULL)
   {
      printf("Erro ao abrir o Arquivo");
      fclose(arqTxt);
      exit(-1);
   }

   while (condicao != 0)
   {
      // Recebendo a string do usuario
      printf("Digite a %do string:\n", i + 1);
      scanf(" %(SIZE-1)[^\n]", txtUsario);
      pontTxtUsario = (char *)realloc(pontTxtUsario, (i + 1) * sizeof(char));
      if (pontTxtUsario == NULL)
      {
         printf("Error for alocacion\n");
         exit(-1);
      }
   }
      /**}
      (*pontTxtUsario)[i] = txtUsario;
      i++; // incrementando o valor de i

      // Verificando o a string inserida pelo usuario e a condição dela
      avaliaTransicao();

      // Enviando para o arquivo txt o resultado da string inserida
      gravaStatus(arqTxt, &txtUsario, status);

      carregaAutomato();
      localizaEstado();
      reconhece();
   }

   // Fechando os arquivos
   **/
   fclose(arqTxt);
   fclose(arqBin);
   return 0;
}