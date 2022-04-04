#include <stdio.h>

int main() {

   int num = 15432;
   int *numpont = &num;
   /**
    * int *numpont -> A variável numpont é um ponteiro para um inteiro
    * o seu valor é o endereço da variavel int num.
    * é como se houvesse uma conexão.
   **/

   printf("Endereco de num = %p\n", &num); // Aqui como precisamos mostrar o endereço de uma variavel 'comum' usamos o &
   printf("Endereco de num = %p\n", numpont); // Como aqui é o propio ponteiro NÃO precisamos usar o &
   printf("Tam em bytes = %ld\n", sizeof(numpont));

   return 0;
}