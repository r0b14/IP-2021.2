#include <stdio.h>
#include <stdlib.h>
/**
 * Funções podem ou não retornarem valores. Isso pode influenciar diretamente na declaração da mesma.
 * Void -> quando ela não retorna diretamente um valor.
 * 
 */
#define TAM 3
// Vetor é meramente formal -> ele está aqui para poder deixar coerente a forma que a funcao se organiza
void preenchevet( float vetor[TAM] )
{
   for(int i = 0; i < TAM; i++)
   {
      printf("Digite o elemento vetor[%d]= ", i+1);
      scanf("%f", &vetor[i]);
   }
}
float somaVet(float vetor[TAM])
{
   float soma;
   for(int i = 0; i < 20; i++)
   {
      soma += vetor[i];
   }
}

int main() {
   /**
    * A função permite que eu transporte a variavel do main para um local um bloco de processamento e retorne o valor modificado.
    * Exemplo -> preenchevet vai transportar vet para ser processado na funcao
    * vet = parametro real (main) => o que vai ser usado de fato
    * float vet[TAM] = parametro formal (na funcao)
    */
   float vet[TAM], soma = 0;
   //1. Intuito/Proposito -> Preencher vetor com os dados do usuario
   preenchevet(vet);
   // 1. Intuito/Proposito -> somar Elementos do Vetor
   soma = somaVet(vet);
   // 1. Intuito/Proposito -> Apresentar media aritmetica dos dados contidos no vetor
   printf("Media = %.2f", soma/TAM);
   return 0;
}