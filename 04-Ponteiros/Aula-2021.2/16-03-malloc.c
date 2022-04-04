#include <stdio.h>

int main(){

    int *pX = NULL;
    pX = (int *) malloc(10 * sizeof(int)); // int pX[10];

    if(pX != NULL) {
        // Posso usar pC como um vetor normal de tamanho 10
        *(pX + 0) = 10; // pX[0] = 10;
        /**
         * *(pX + 3) = 10
        **/
       for(i = 0 ; i < 10 ; i++){
           printf("Digite o Numero: ");
           scanf("%d", &pX[i]);
       }
       free(pX); // O free limpa o endereço da memoria
    }
    else {
        printf("Problema de Alocação\n")
    }

    return 0;
}