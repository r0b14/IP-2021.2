/* Prova 2021.2*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100
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
Transicao *carregaAutomato(char *nomeArqBin, long *numEstados) {


}

void gravaStatus(FILE *arqSaida, char *entrada, char status) {

}

long *localizaEstado(Transicao *automato, long numEstados, int estadoAtual, int *numEstadosAtuais, char qual) {
   
}

int avaliaTransicao(Transicao *automato, long numEstados, int estadoAtual, char caractereAtual) {

}

void reconhece(FILE *arqSaida, Transicao *automato, long numEstados, char *entrada) {

}

int main() {

   FILE *arqBin = NULL; // Arquivo criado
   char txtUsario[SIZE];
   long numEstados = 0; // Numero total de estados dentro do arquivos
   int condicao, i = 0;

   while (condicao != 0) {
      // Recebendo a string do usuario
      printf("Digite a %do string:\n", i+1);
      scanf(" %(SIZE-1)[^\n]", txtUsario);
   }

   //Criando arquivo
   arqBin = fopen("ArquivoBinario.bin", "wb");
   if(arqBin == NULL){
      printf("Erro ao abrir o Arquivo");
      fclose(arqBin);
      exit(-1);
   }
   fwrite(lista, sizeof(int), *numQtd, arqAux);
   fclose(arqAux);

   carregaAutomato(, );

   fclose(arqBin);
   return 0;
}