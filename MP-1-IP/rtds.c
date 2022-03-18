#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * trabalho será fazer um interpretador -> Assemble + Exec em C
 *  ## Instruções ##
 * 1. ldv -> destino, valor (Carrega o inteiro valor no destino) -> origem -- destino.
 * 2. swp -> destino, origem (faz uma troca entre os valores dos registradores destino e origem)
 * 3. mov -> destino, origem (Copia o valor de um registrador para outro)
 * 4. add -> destino, origem (adição destino = destino + origem e guarda no destino)
 * 5. sub -> destino, origem (subtração destino = destino - origem e guarda no destino)
 * 6. mul -> destino, origem (multiplicação destino = destino * origem e guarda no destino)
 *
 * ## origem e destino são os índices do vetor de registradores que serão utilizados ##
 *  FGETS -> fgets(name, SIZE - 1, stdin);
 */

#define TAM_CODE 15 // O tamanho max que o código
#define N_REG 32    // Limite de registrados -> ultrapassou !! ERRO !!

typedef struct
{
   int numInstrucao;
   char nomeInstrucao[4];
   int destino, origem;
} Instrucao;

int main()
{

   int qtdLinhas, i, j, verfinstrucao = 0, tempOrigem = 0, tempDestino = 0;
   scanf("%d", &qtdLinhas);          // Recebendo o valor da qtd de linhas
   char codigo[qtdLinhas][TAM_CODE]; // Vetor que vai guardar a instrucao que o usuario colocar.
   char temp[8];                     // Vetor temporario que guardará o valor para poder verificar
   Instrucao instrucao[qtdLinhas];
   int registradores[N_REG] = {0}; // Zerando todo o vetor

   for (i = 0; i < qtdLinhas; i++)
   {
      for (j = 0; j != '\0'; j++)
      {
         fgets(codigo[i][j], TAM_CODE - 1, stdin); // I = indice do vet | J = limite do vet
      }
   } // Guardei todos os comandos no vetor codigo

   // Varrendo o vetor para poder separar os comandos dos numeros
   for (i = 0; i < qtdLinhas; i++)
   {
      for (j = 0; j <= 2; j++)
      {                          // j <= strlen(codigo[i][j])->vai percorrer até limite da string
         temp[i] = codigo[i][j]; // Juntara a o nome da instrução
      }
      // Comparando o nome da instrução para poder inserir o indice
      if (temp[i] == "ldv")
      {
         verfinstrucao = 1;
      }
       else if (temp[i] == "swp")
      {
         verfinstrucao = 2;
      }
      else if (temp[i] == "mov")
      {
         verfinstrucao = 3;
      }
      else if (temp[i] == "add")
      {
         verfinstrucao = 4;
      }
      else if (temp[i] == "sub")
      {
         verfinstrucao = 5;
      }
      else if (temp[i] == "mul")
      {
         verfinstrucao = 6;
      } else {
         break; // Fora do escopo do for
      }

      instrucao[i].numInstrucao = verfinstrucao; // Já sei qual o valor da instrucao
      instrucao[i].nomeInstrucao = temp[i];      // transferindo o que temp para o nome da instrucao

      // Verificando a origem e o destino
      for (j = 4 ; j == 4 ; j++) {
         tempDestino = codigo[i][j]; // Recebendo o valor do destino
      }
      instrucao[i].destino = tempDestino; // Trasnferido para a estrutura o valor do destino

      for (j = 6 ; j == 6 ; j++) {
         tempOrigem = codigo[i][j]; // Recebendo o valor da origem
      }
      instrucao[i].origem = tempOrigem; // Trasnferido para a estrutura o valor da origem.

     ;
      // Fazendo a separação

      // LDV
      if ( instrucao[i].numInstrucao == 1) {
         registradores[tempDestino] = instrucao[i].origem;
      } 
      // SWP
      else if ( instrucao[i].numInstrucao == 2 ) {
         int temporariaSWP = 0;
         registradores[tempDestino] = instrucao[i].destino;
         registradores[tempOrigem] = instrucao[i].origem;

         temporariaSWP = registradores[tempOrigem];
         registradores[tempDestino] = registradores[tempOrigem];
         registradores[tempOrigem] = temporariaSWP;
      }
      // MOV
      else if ( instrucao[i].numInstrucao == 3 ) {
         registradores[tempOrigem] = registradores[tempDestino];
      }

      }

      tempDestino = 0;
      tempOrigem = 0
      verfinstrucao = 0;
   }

   printf("Valores nos registradores:\n");
   for(i = 0 ; i < qtdLinhas; i++) {
      printf("register[%d] = %d", i+1, registradores[i]);
   }


   return 0;
}