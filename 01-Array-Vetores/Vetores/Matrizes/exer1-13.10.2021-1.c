#include <stdio.h>

int main()
{

   int vet[] = {0, 2, 4, 6, 8, 10};
   int i;
   // Mostrando o tamanho do vetor em bytes
   printf("Tamanho em bytes= %ld\n", sizeof(vet));
   /**
    * Vai pegar 24 / 4
    * 24 -> é o tamanho do vetor em bytes/a quantidade que usa
    * 4 --> é a quantidade de bytes que uma variavel int usa
    * 6 --> quantidade de elementos que tem o vetor
    **/
   // Mostrando a quantidade de elementos no vetor
   printf("quantidade de elementos= %ld\n", sizeof(vet) / sizeof(int));

   /** Fazendo uma outra representação
    * O sizeof retorna como long int
    * como eu vou querer a quantidade de elementos e não o tamanho que todo ele ocupa, o int é suficiente
    */    
   int tam = sizeof(vet) / sizeof(int);
   // Mostrando a quantidade de elementos no vetor
   printf("quantidade de elementos= %d\n", tam);

   /** Podemos demonstrar todos os elementos que estão dentro do vetor sem ter declarado o tamanho do vetor
    * vamos basear o limite do for na variável que recebe a quantidade de elementos do vet.
    */
   for (i = 0; i < tam; i++)
   {
      printf("vet[%d]= %d\n", i, vet[i]);
   }

   return 0;
}