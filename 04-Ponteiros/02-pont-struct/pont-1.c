/* Vetor que cresce a depender da necessidade do usuário*/
#include <stdio.h>
#include <stdlib.h>
   /**
    * Um programa que vai executar o vetor a depender da necessidade do usuario.
    * O vetor não terá uma estrutura fixa, logo, precisamos usar alocação dinâmica.
    * como a tendeência é que o vetor cresça, não precisaremos usar funções relacionado a desalocação
    * a função que mais se encaixa a situação atual é a realloc(vet, tam-alocado)
   **/ 
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
         exit(1); // O compilador demonstra ao S.O que foi algum erro no programa.
      }
      vet[n] = tmp; // Inserindo no local de n o valor tmp
      n++;
      // Recebendo novamente o valor do usuário e inserindo na posicao n
      printf("Digite um valor (<= 0 para): ");
      scanf("%d", &tmp);
   }

   // Apresentando os valores que o usuario inseriu
   for(int i = 0; i < n; i++) {
      printf("vet[%d] = %d\n", i+1, vet[i]);
   }

   return 0;
}