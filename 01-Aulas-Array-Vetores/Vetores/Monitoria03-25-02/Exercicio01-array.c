/* Maior sequencia decrescente */
#include <stdio.h>
/**
 * Precisamos verificar dentro do vetor qual a maior sequencia decrescente inserida pelo usuario
 * 1 - entra com a quantiade de sequencia irá ter o programa
 * 2 - quantos numeros terão a sequencia
 * 
**/
int main()
{
    int quantSequencia, tamSequencia;
    int index;
    scanf("%d", &quantSequencia); // Recebendo os valores do usuario

    while (quantSequencia > 0)
    {
        scanf("%d", &tamSequencia);
        int sequencia[tamSequencia] = { 0 };
        for(index = 0; index < tamSequencia; index++)
        {
            scanf("%d", &sequencia[index]);
        }
        // Array sequencia totalmente preenchido
        --quantSequencia;
    }

    return 0;
}