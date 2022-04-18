#include <stdio.h>
#include <stdlib.h>

#define TAM 3

void preenchevet( float vetor[TAM] ) {
   for(int i = 0; i < TAM; i++)
   {
      printf("Digite o elemento vetor[%d]= ", i+1);
      scanf("%f", &vetor[i]);
   }
}

float somaVet(float vetor[TAM]) {
   float soma = 0;
   for(int i = 0; i < TAM; i++)
   {
      soma += vetor[i];
   }
   return soma;
}

void imprimeMedia(float soma) {
   printf("Media= %.2f", soma/TAM);
}

int main() {

   float vet[TAM];
   preenchevet(vet);
   imprimeMedia(somaVet(vet));

   return 0;
}