#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * O programa vai inserir a quantidade de notas do aluno baseado naquilo que o prof
 * necessita.
 * calcular a media baseada na quantidade.
 **/
int main( void )
{
    float media= 0, somanotas= 0;
    int qtd_notas, i;
    printf("Digite a quantidade de notas: ");
    scanf("%d", &qtd_notas);
    float vetnotas[qtd_notas];

    for ( i = 0 ; i < qtd_notas ; i++)
    {
        printf("%do nota: ", i+1);
        scanf("%f", &vetnotas[i]);
        somanotas += vetnotas[i];
    }

    media = somanotas/qtd_notas;
    printf("%s%12s\n", "Avaliacao", "Notas");

    for ( i = 0 ; i < qtd_notas ; i++)
    {
        printf("%6d%15.2f\n", i+1, vetnotas[i]);
    }
    printf("  \nMedia: %.2f", media);

    return 0;
}