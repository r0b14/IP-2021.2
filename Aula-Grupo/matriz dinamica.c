#include <stdio.h>
#include <stdlib.h>

int **AlocaMatriz (int **matriz, int linhas, int colunas) {

    matriz = (int **) malloc (sizeof(int*) * linhas);
    if (matriz == NULL) {
        printf("Erro de alocacao\n");
        exit(1);
    }
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *) malloc (sizeof(int) * colunas);
        if (matriz[i] == NULL) {
        printf("Erro de alocacao\n");
        exit(1);
    }
    }

    return matriz;
}

void PreencheMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
        scanf("%d", &matriz[i][j]);
    }
    }
}

void ImprimeMatriz(int **matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
       printf("%d ", matriz[i][j]);
    }
    printf("\n");
    }
}

void LiberaMatriz(int **matriz, int linhas) {
    for (int i = 0; i < linhas; i++) {
       free(matriz[i]);
    }
    free(matriz);

}

int main() {
    int linhas, colunas;
    int **matriz;
    scanf("%d %d", &linhas, &colunas);
    matriz = AlocaMatriz (matriz, linhas, colunas);
    PreencheMatriz (matriz, linhas, colunas);
    ImprimeMatriz (matriz, linhas, colunas);  
    LiberaMatriz(matriz, linhas);
    return 0;
}