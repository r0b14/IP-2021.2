#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mudandoNumeros(int *a, int *b) {// Recebi o endereço de X e Y
   int tmp = 0;
   tmp = *a;
   *a = *b;
   *b = tmp;
   printf("valores na funcao\n a = %d | b = %d\n", *a, *b);
   printf("ponteiros na funcao\n a = %p | b = %p\n", a, b);
}

int main() {

   /**
    * ESSE PROGRAMA NOS MOSTRA A LIMITAÇÃO QUE HÁ QUANDO NÃO USAMOS PONTEIROS NAS FUNÇÕES
    * o valor é alterado na função, mas no main o retorno não é demonstrado.
    * A regiao da memoria de mudandoNumeros é diferente da regiao de memoria de x e y
    * Esse problema pode ser resolvido usando ponteiros
   **/
   int x, y;
   printf("Digite 2 inteiros = ");
   scanf("%d %d", &x, &y);
   mudandoNumeros(&x, &y); // Passagem por valor
   printf("valores na main\n x = %d | y = %d\n", x, y);
   printf("enderecos na main\n x = %p | y = %p\n", &x, &y);

   return 0;
}