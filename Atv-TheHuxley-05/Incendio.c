#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
   int id;
   double temperatura;
   char fumaca;

} Incendio;

int main() {

   int qtdIncendios;
   int i, j;
   scanf("%d", &qtdIncendios); // Recebendo o valor da quantidade de incedios

   for (i = 0; i < qtdIncendios; i++) {
      int testesIcendios;
      double media_tempo = 0;
      scanf("%d", &testesIcendios);

      Incendio incendios[testesIcendios]; // Vetor com a estrutura

      // Recebendo os valores do usuário
      for (j = 0; j < testesIcendios; j++) {
         scanf("%d", &incendios[j].id);
         scanf("%lf", &incendios[j].temperatura);
         scanf(" %c", &incendios[j].fumaca);
         media_tempo += incendios[j].temperatura;
      }
      media_tempo = (media_tempo / testesIcendios) * 1.15;
      printf("TESTE %d\n", i + 1);
      for (j = 0; j < testesIcendios; j++) {
         if (incendios[j].fumaca == 'S') {
            printf("%d\n", incendios[j].id);
         } else if (incendios[j].temperatura > media_tempo) {
            printf("%d\n", incendios[j].id);
         } else if (incendios[j].temperatura > 40.0) {
            printf("%d\n", incendios[j].id);
         }
      }
   }

   return 0;
}