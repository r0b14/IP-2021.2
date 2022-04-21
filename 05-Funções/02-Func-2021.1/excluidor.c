#include <stdio.h>
#include <stdlib.h>
#define N 2

int *remover(int *v, int index, int *nElementos)
{
   if (*nElementos == 0){
      return NULL; // Nesse caso não há o que remover.
   }
   if (index >= *nElementos) {
      return v; // Index inválido.
   }
   /* Sobrepomos aquele elemento */
   for (int i = index; i < *nElementos - 1; i++) {
      v[i] = v[i + 1];
   }
   /* Realocamos */
   int *temp = v;
   temp = (int *)realloc(temp, (*nElementos - 1) * sizeof(int));
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

   printf("Item a remover: ");
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

      v = remover(v, index, &n); // Função de remover.

      printf("2 - VETOR Suc: ");
      for (int i = 0; i < n; i++)
      {
         printf("%d ", *(v + i)); // v[i]
      }
      printf("\n");

      printf("Item a remover:");
      scanf("%d", &index);
   }

   return 0;
}