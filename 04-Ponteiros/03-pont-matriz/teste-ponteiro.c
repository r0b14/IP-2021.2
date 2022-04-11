#include <stdio.h>
#include <stdlib.h>

int main() {

   int a = 2;
   int *pontA = &a;
   int **pontPontA = &pontA;

   printf("Valor de a= %p \n", &a);
   printf("Valor de pontA= %p \n", pontA);
   printf("Valor de pontPontA= %p \n\n", pontPontA);

   printf("Valor de a= %d \n", a);
   printf("Valor de pontA= %d \n", *pontA);
   printf("Valor de pontPontA= %d \n", **pontPontA);

   printf("\nMudando valores de a\n\n");
   for (int i = 1; i <= 2; i++) {
      a += i;
      printf("Valor de a= %d \n", a);
      printf("Valor de pontA= %d \n", *pontA);
      printf("Valor de pontPontA= %d \n", **pontPontA);
   }

   printf("\nMudando valores de pontA\n\n");
   for (int i = 1; i <= 2; i++) {
      *pontA += i;
      printf("Valor de a= %d \n", a);
      printf("Valor de pontA= %d \n", *pontA);
      printf("Valor de pontPontA= %d \n", **pontPontA);
   }

   printf("\nMudando valores de pontPontA\n\n");
   for (int i = 1; i <= 2; i++) {
      **pontPontA += i;
      printf("Valor de a= %d \n", a);
      printf("Valor de pontA= %d \n", *pontA);
      printf("Valor de pontPontA= %d \n", **pontPontA);
   }

   return 0;
}