#include <stdio.h>
#include <stdlib.h>

int main()
{
   float vet[20], soma = 0;
   /**
    * 1. Intuito/Proposito -> Preencher vetor com os dados do usuario
    * 2. Entrada -> Que dados entram nesse trecho de código? (Dominio)
    * 3. Saida -> Que valor sai deste trecho de codigo? (Imagem)
   **/
   for(int i = 0; i < 20; i++)
   {
      printf("Digite o elemento vet[%d]= ", i+1);
      scanf("%f", &vet[i]);
   }
   /**
    * 1. Intuito/Proposito -> somar Elementos do Vetor
   **/
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