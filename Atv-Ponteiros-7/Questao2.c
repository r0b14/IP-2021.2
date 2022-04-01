#include <stdio.h>

int main() {

   int vet[5] = {1, 2, 3, 4, 5};
   int *p = &vet;

   printf("\n\n");

   // Letra 2A)
   printf("Letra 2A\n");
   printf("end vet: %p\n", &vet);
   printf("end p: %p\n", p);

   printf("\nLetra 2B\n");
   for (int i = 0; i < 5; i++) {
      printf("%d ", p[i]);
   }

   printf("\n\nLetra 2C\n");
   for (int i = 0; i < 5; i++) {
      printf("%d ", *(p + 1));
   }

   printf("\n\nLetra 2D-1\n");
   for (int i = 0; i < 5; i++)
   {
      printf("%d ", vet[i]);
   }

   printf("\n\nLetra 2D-2\n");
   for (int i = 0; i < 5; i++)
   {
      printf("%d ", *(vet + i));
   }


   printf("\n\n");

   return 0;
}