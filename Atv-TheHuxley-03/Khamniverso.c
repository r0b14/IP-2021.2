/* Sherliro Salva o Khamniverso */
#include <stdio.h>


int main(){

   int n, i;
   scanf("%d", &n);
   int sequencia[n];
   for(i = 0; i < n; i++){ // Lendo a sequencia
      scanf("%d", &sequencia[i]);
   }

   for(i = 0; i < n; i++) { // Verificando se a sequencia é valida
      if (sequencia[i] + sequencia[i + 1] != sequencia[i + 2]) {
         printf("Sherliro achou o termo %d que deveria estar na posicao %d\n", (sequencia[i] + sequencia[i + 1]), i + 3);
         return 0; // Um salto
      }
   }

   return 0;
}