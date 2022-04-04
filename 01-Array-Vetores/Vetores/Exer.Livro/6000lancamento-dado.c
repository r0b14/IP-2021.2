    /* Figura 6.9: fig06_09.c
    Lança um dado de 6 lados 6000 vezes */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

/* função main inicia a execução do programa */
int main(void)
{
    int face; /* valor aleatório de 1 - 6 do dado (face do dado) */
    int roll; /* contador de lançamentos de 1-6000 */
    int frequency[SIZE] = { 0 }; /* limpa contadores */

    srand(time( NULL )); /* semente do gerador de números aleatórios */
    
    /* rola dado 6000 vezes */
    for (roll = 1; roll <= 6000; roll++) {
    face = 1 + rand() % 6; 
    //almentando o valor do elemento na posicao face(a posicao que o face vai receber)
    ++frequency[face]; /* substitui switch de 26 linhas da Fig. 5.8 */
    } /* fim do for */

    printf("%s%17s\n", "Face", "Frequency");

    /* mostra elementos de frequência 1-6 em formato tabular */
    for ( face = 1; face < SIZE; face++ ) {
    printf("%4d%17d\n", face, frequency[ face ] );
    } /* fim do for */

    return 0; /* indica conclusão bem-sucedida */

}   /* fim do main */