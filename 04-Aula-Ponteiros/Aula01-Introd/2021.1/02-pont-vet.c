#include <stdio.h>
/*
int main() {
   int num = 15432;
   char *pchar = (char *) &num;
   for (int i = 0; i < 4; i++) {
      printf("Valor %d\n", pchar[i]);
   }
   return 0;
}
*/

int main() {

   int num[3] = {1, 2, 3};
   int *pont;
   pont = num; // num ja tem o & embutido em seu nome
   for (int i = 0; i < 3; i++) {
      printf("num[%d] = %d\n", i+1, pont[i]);
   }

   return 0;
}