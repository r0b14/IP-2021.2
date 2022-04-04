#include <stdio.h>
#include <string.h>

int main () {

   int i, j;
   int matriz[4][4] = {{0, 1, 2, 2}, // 00, 01, 02, 03
                       {3, 4, 5, 5}, // 10, 11, 12, 13 
                       {6, 7, 8, 8}}; // 20, 21, 22, 23

   for(i = 0; i < 4; i++) {
      printf("%do LOOP\n i = %d\n", i+1, i);
      for(j = 0; j < 4; j++) {
         printf("%d ", matriz[i][j]);
      }
      printf("\n");
   }

   return 0;
}