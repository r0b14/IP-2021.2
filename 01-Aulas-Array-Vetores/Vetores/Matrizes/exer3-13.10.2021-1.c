#include <stdio.h>


int main() {
   /**
    * Ordenando o vetor de forma crescente
    * 1. precisamos encontrar o menor
    * 2. inserir o menor na primeira posicao
    * 3. Ordenar os outros que sao maiores que o menor e menor que o maior
    * 4. Pondo em ordem crescente 
    * ## Tentar fazer o mais didático possivel para o usuario ##
    *  54	 66	  7	 87	 39	 62	 70	  4	 77	 46
    *  27	 22	 62	 11	 71	 72	 35	  2	 88	 16
    */

   int i, menor = 1000, qtd;
   printf("Digite a quantidade de elementos: ");
   scanf("%d", &qtd);
   int vet[qtd];
   // Recebendo os valores
   for ( i = 0 ; i < qtd ; i++ ) {
      printf("%d: ", i+1);
      scanf("%d", &vet[i]);
   }
   // Verificando o menor
   for ( i = 0 ; i < qtd ; i++ ) {
      if(vet[i] < menor) {
         menor = vet[i];
      }
   }
   printf("menor= %d", menor);

   return 0;
}

/**
54
66
7
87
39
62
70
4
77
46
27
22
62
11
71
72
35
2
88
16
**/