#include <stdio.h>

int main()
{

    int vetor1D[5] = { 0 }; // Zeramos todos os elementos que estao dentro do vet
    int vetor2D[2][2] = {
        {1 , 2}, // A00 = 1 ; A01 = 2
        {3 , 4}  // A10 = 3 ; A11 = 4
    };

    /**
     * Inserindo valores no vetor
     * Manualmente e com Scanf
    **/

   vetor1D[3] = 10; /*no vetor vetor1d na posicao 3[4] insira o valor 10*/
   vetor2D[0][1] = 4; /* no vetor vetor2d na posicao lin 0 col 1 insira o valor 4*/

    return 0;
}