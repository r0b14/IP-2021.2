#include <stdio.h>
#include <stdlib.h>

#define TAM 20

preenchevet( float vet[TAM] ) {
   float vet[TAM];
   for(int i = 0; i < TAM; i++)
   {
      printf("Digite o elemento vet[%d]= ", i+1);
      scanf("%f", &vet[i]);
   }
}

int main()
{
   float vet[TAM], soma = 0;
   //1. Intuito/Proposito -> Preencher vetor com os dados do usuario
   preenchevet(vet);
   for(int i = 0; i < 20; i++)
   {
      printf("Digite o elemento vet[%d]= ", i+1);
      scanf("%f", &vet[i]);
   }
   
   // 1. Intuito/Proposito -> somar Elementos do Vetor
   
   for(int i = 0; i < 20; i++)
   {
      soma += vet[i];
   }
   /**
    * 1. Intuito/Proposito -> Apresentar media aritmetica dos dados contidos no vetor
   **/
   printf("Media = %.1f", soma/20);

   return 0;
}