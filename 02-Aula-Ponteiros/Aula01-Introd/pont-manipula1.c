#include <stdio.h>
#include <stdlib.h> //Biblioteca usada para poder manipular ponteiros


int main()
{
    /**
     * Malloc() -> ela vai pedir ao S.O mais alguns bytes
     * A funcao Malloc que aloca memoria só que a sua referencia é baseada em bits.
     */
    int *vet;
    vet = {int *} malloc(100 * sizeof(int));
    
    if (vet != NULL){
        printf("Alocacao bem sucedida\n");
        int i;
        for (i=0; i<100; i++){
            printf("vet{%d}=%d\n", i+1, vet[i]);
        }
        free{vet};
    }
    

    return 0;
}