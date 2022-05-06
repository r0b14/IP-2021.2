#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

int main() {

   char str[SIZE]; // String
   char str_inv[SIZE]; // String invertida
   char *ptr_str = str;
   char *ptr_inv = str_inv;
   int i = -1;

   scanf(" %s", str);

   while (*(ptr_str) != '\0') {
      ptr_str++;
      i--;
   }

   while (i != 0) {
      *(ptr_inv) = *(ptr_str - 1);
      ptr_str--;  // anda p/ tras 
      ptr_inv++; // Anda p/ frente
      i++;
   }

   printf(" O inverso da string : %s\n\n", str_inv);
   free(ptr_str);
   free(str_inv);
   return 0;
}

   /**
    *  ### Letra B ###
    * Não é necessário usar o '&' 
    * 
    */