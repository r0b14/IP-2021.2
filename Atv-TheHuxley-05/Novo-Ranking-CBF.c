#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 16

typedef struct {
   char nomeClube[SIZE];
   double valorElenco;
   int qtdJogaGrandes;
   int qtdTitulos;
   char neymar[4];
   char eFlamengo[4];
   double totalPontos;
} Time;

int main() {

   int qtdTimes, i;
   double pontos = 0;
   scanf("%d", &qtdTimes);

   Time times[qtdTimes];

   for (i = 0; i < qtdTimes; i++) {
      scanf(" %15[^\n]", times[i].nomeClube);
      scanf("%lf", &times[i].valorElenco);
      scanf("%d", &times[i].qtdJogaGrandes);
      scanf("%d", &times[i].qtdTitulos);
      scanf(" %s", times[i].neymar);
      scanf(" %s", times[i].eFlamengo);
   }
   // Calculado pontos
   for (i = 0; i < qtdTimes ; i++) {
      pontos = 0;
      pontos += times[i].valorElenco;
      pontos += times[i].qtdJogaGrandes * 100.0;
      pontos += times[i].qtdTitulos * 2000.0;
      if (strcmp(times[i].neymar, "sim") == 0) {
         pontos += 10000.0;
      }
      if (strcmp(times[i].eFlamengo, "sim") == 0) {
         pontos += 20000.0;
      }
      times[i].totalPontos = pontos;
   }

   // Ordenar por pontos -> Ordem Descrecente
   for (int j = 0; j < qtdTimes - 1; j++) {
      for (i = 0; i < qtdTimes - 1; i++) {
         if (times[i].totalPontos < times[i + 1].totalPontos) {
            Time aux = times[i];
            times[i] = times[i + 1];
            times[i + 1] = aux;
         }
      }
   }

   for (i = 0; i < qtdTimes; i++) {
      printf("%s %.2lf\n", times[i].nomeClube, times[i].totalPontos);
   }
}