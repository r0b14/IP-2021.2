#include <stdio.h>

int main() {

   int num = 15432;
   int *numpont = &num;
   /**
    * int *numpont -> A variável numpont é um ponteiro para um inteiro
    * o seu valor é o endereço da variavel int num.
    * é como se houvesse uma conexão.
   **/

   printf("Endereco de num = %p\n", &num);
   printf("Endereco de num = %p\n", numpont);
   printf("Tam em bytes = %ld\n", sizeof(numpont));

   return 0;
}