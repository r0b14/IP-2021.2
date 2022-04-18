#include <stdio.h>
#include <stdlib.h>

#define TAM 3
   /**
    * Quanto estou usando ponteiro na função, diante mão eu não sei qual o tamanho do vetor
    * Nesse caso, sabemos porque usamos TAM como referencia.
            void preenchevet( float *vetor )
   * Mas que eu posso deixar essa função o mais genérica possivel, pedindo i como parametro do usuario
            void preenchevet( float *vetor, int tamVet ) {
   **/
void preenchevet( float *vetor, int tamVet ) {
   tamVet = 0;
   scanf("%d", &tamVet);   
   for(int i = 0; i < tamVet; i++)
   {
      printf("Digite o elemento vetor[%d]= ", i+1);
      scanf("%f", &vetor[i]);
   }
}
// Somar todos os elementos de dentro do vetor
float somaVet(float vetor[TAM]) {  // o Parametro de entrada precisa ser um vetor criado no main
   float soma = 0;
   for(int i = 0; i < TAM; i++)
   {
      soma += vetor[i];
   }
   return soma; // Retorno da funcao
}

void imprimeMedia(float soma) {
   printf("Media= %.2f", soma/TAM);
}

int main() {

   float vet[TAM];
   float *pontVet = vet; // O ponteiro permite a funcao acessar "remotamente" o o conteudo. Ao inves de passar todo o conteudo do ponteiro
   int tamanhoVet = 0;
   preenchevet(vet, tamanhoVet);
   imprimeMedia(somaVet(vet));

   return 0;
}