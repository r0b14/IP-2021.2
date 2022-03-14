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
    int maiorSequencia = 0, atualSequencia = 0, indexFinal = 0;
    int index, i;
    scanf("%d", &quantSequencia); // Recebendo os valores do usuario

    while (quantSequencia > 0)
    {
        scanf("%d", &tamSequencia);
        int sequencia[tamSequencia];
        for (index = 0; index < tamSequencia; index++)
        {
            scanf("%d", &sequencia[index]);
        }
        for (i = 1; i < tamSequencia; i++) //Percorrendo todo o vetor sequencia.
        {
            if (sequencia[i] < sequencia[i+1]) // Verificando se o antecessor é menor que o seu sucessor
            {
                atualSequencia++;
            }
            else
            {
                if(atualSequencia > maiorSequencia)
                {
                    maiorSequencia = atualSequencia;
                    indexFinal = i - 1;
                }
                atualSequencia = 0;
            }
        }

        if(atualSequencia > maiorSequencia)
        {
            maiorSequencia = atualSequencia;
            indexFinal = tamSequencia - 1;
        }

        printf("%d\n", maiorSequencia);
        if (maiorSequencia > 0)
        {
            for (i = indexFinal - maiorSequencia; i <= indexFinal ;i++)
            {
                printf("%d", sequencia[i]);
            }
            printf("\n");
        }
        // Array sequencia totalmente preenchido
        --quantSequencia;
        maiorSequencia = 0;
        atualSequencia = 0;
        indexFinal = 0;
    }

    return 0;
}