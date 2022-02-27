#include "stdio.h"
#include "math.h"

int main() {

   char letra;
   int nl, cont=1, nP, v;
   scanf("%c", &letra);
   nl = (letra - 64);

   while(cont <= nl) {
      nP = nl - 1;
      while(nP >= cont) {
         printf(".");
         nP--;
      }
      v = 1;
      while(v <= cont){
         printf("%c", v + 64);
         v++;
      }
      v -= 2;
      while(v > 0){
         printf("%c", v + 64);
         v--;
      }
      nP = nl - 1;
      while(nP >= cont) {
         printf(".");
         nP--;
      }

      printf("\n");
      cont++;
   }

   return 0;
}