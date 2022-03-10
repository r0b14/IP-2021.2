/*Par Vs Impar */
#include <string.h>
#include <stdio.h>
#include <math.h>


int main(){

   int i, j, k;
   int size, SumPar = 0, SumImpar = 0;

   scanf("%d", &size);

   char palavra[size][size][31];
   for (i = 0; i < size; i++){
      for (j = 0; j < size; j++){
         scanf("%s", palavra[i][j]);
      }
   }

   for (i = 0; i < size; i++){
     for (j = 0; j < size; j++){
         if ((i + j) % 2 == 0){
            for (k = 0; palavra[i][j][k] != '\0'; k++){
               if (k % 2 == 0){
                  SumPar += palavra[i][j][k];
               }
            }
         }
         else {
            for (k = 0; palavra[i][j][k] != '\0'; k++){
               if (k % 2 != 0){
                     SumImpar += palavra[i][j][k];
               }
            }
         }
     }
   }

   //Printar na tela
   if (SumPar == SumImpar){
      printf("Tivemos um empate em %d pontos!\n", SumPar);
   }
   else {
      if (SumPar > SumImpar){
         printf("Os pares venceram com %d pontos!\n", SumPar);
      }
      else{
         printf("Os impares venceram com %d pontos!\n", SumImpar);
      }
   }

   return 0;
}