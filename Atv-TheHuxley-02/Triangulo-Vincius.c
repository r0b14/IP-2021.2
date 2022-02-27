#include <stdio.h>
#include <math.h>

#define ANO_BISSEXTO(ANO)  (((ANO % 4 == 0) && (ANO % 100 > 0)) || (ANO % 400 == 0));

int main() {

   int d1, m1, a1, d2, m2, a2; // Recebedores do usuario
   int i, diaT, anoT, mesT, soma; // Somadores
   int Ta1 = 0, Ta2 = 0; // Testes
   scanf("%d/%d/%d", &d1, &m1, &a1);
   scanf("%d/%d/%d", &d2, &m2, &a2);

   Ta1 = ANO_BISSEXTO(a1);
   Ta2 = ANO_BISSEXTO(a2);

   // Verificado os anos bissextos
   if(Ta1 == 1){
      d1++;
   } else if(Ta2 == 1){
      d2++;
   } else if(Ta1 == 1 && Ta2 == 1){
      d1++;
      d2++;
   }



   return 0;
}