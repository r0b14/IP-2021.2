#include <stdio.h>
#include <stdlib.h>
#define N 5

int *remover(int *v, int index, int *nElementos)
{
   // numero de indices que possuo == 0
   if (*nElementos == 0){
      return NULL; // Nesse caso não há o que remover.
   }
   // indice que desejo excluir >= numero de indices que possuo
   if (index >= *nElementos) {
      return v; // Index inválido.
   }
   /**
    * Sobrepomos aquele elemento
    * Vai andar de forma crescente, só que sobreescrevendo os elementos.
   **/
   for (int i = index; i < *nElementos - 1; i++) {
      v[i] = v[i + 1];
      printf("%d ", v[i]);
   }
   /* Realocamos */
   int *temp = v;
   temp = (int *) realloc(temp, (*nElementos - 1) * sizeof(int));
   if (temp == NULL && *nElementos != 1)
      exit(1);

   (*nElementos)--;
   return temp; // Retornamos o ponteiro
}

int main()
{
   int *v = (int *) malloc(N * sizeof(int)); // Alocando vetor com 'lixo' de memoria
   int n = N, index;

   // Preeenchendo o ponteiro com valores arbitrários.
   for (int i = 0; i < n; i++)
   {
      *(v + i) = i*2; // *(v + i) == v[i]
   }

   printf("Indice do item a remover: ");
   scanf("%d", &index);

   //index não pode ser negativo, pois vai está verificando os indices do vetor
   while (index >= 0)
   {
      printf("1 - VETOR Ant: ");
      for (int i = 0; i < n; i++)
      {
         printf("%d ", *(v + i)); // v[i]
      }
      printf("\n");

      /**
       * v = ponteiro que contem os valores
       * index = indice do elemento que vc deseja excluir
       * n = o valor total dos elementos que possuo
      **/
     printf("\n\n");
      v = remover(v, index, &n); // Função de remover.
     printf("\n\n");
      /**
       * v = com os valores atualizados e realocado para menos
       * index = é retornado decrementado, pois foi removido um elemento
       * n = é retornado com um valor diminuido pois os total de elementos vai ser decrementado
      **/

      printf("2 - VETOR Suc: ");
      for (int i = 0; i < n; i++)
      {
         printf("%d ", *(v + i)); // v[i]
      }
      printf("\n");

      printf("Indice do item a remover: ");
      scanf("%d", &index);
   }

   return 0;
}
 
 //Descrição Básica sobre a função
/**
* index = 1 <-> i == 1
* *nElementos = 3
*				 1 <	(3 - 1) <-> 1 < 2
* for (int i = index; i < *nElementos - 1; i++) {
*
*	v[i] = v[i + 1]; <-> v[1] = v[2]
*
*  }
**/