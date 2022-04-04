#include <stdio.h>
#include <stdlib.h>

int main() {

   int n = 0, tmp;
   int *vet = NULL;
   // Ler inteiros do teclado enquanto > 0
   printf("Digite um valor (<= 0 para): ");
   scanf("%d", &tmp);

   while ( tmp > 0 ) {
      vet = (int *) realloc(vet, (n+1) * sizeof(int)); // Alocação Dinamica
      if (vet == NULL) { // Verificando a alocação
         printf("Erro Alocação!!\n");
         exit(1); // O compilador demonstra o S.O que foi algum erro no programa.
      }
      vet[n] = tmp; // Inserindo no local de n o valor tmp
      n++;
      // Recebendo novamente o valor do usuário e inserindo na posicao n
      printf("Digite um valor (<= 0 para): ");
      scanf("%d", &tmp);
   }
   

   return 0;
}