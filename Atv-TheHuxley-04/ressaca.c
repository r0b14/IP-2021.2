#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    int num= 0, i, j; 
    char x, y;
    scanf("%d", &num);

    char comando[num + 1][10];
    for (i= 0; i< num + 1; i++){
        gets(comando[i]);
    }

    //Procurando as plavras Chaves
    for (i = 0; i < num + 1; i++){
        if (strncmp(comando[i], "mov", 3) == 0){
            x = comando[i][4];
            y = comando[i][7];
            strcpy(comando[i], " ");
            sprintf(comando[i], "%c = %c", x, y);
            printf("%s\n", comando[i]);
        }
        if (strncmp(comando[i], "add", 3) == 0){
            x = comando[i][4];
            y = comando[i][7];
            strcpy(comando[i], " ");
            sprintf(comando[i], "%c += %c", x, y);
            printf("%s\n", comando[i]);
        }
        if (strncmp(comando[i], "sub", 3) == 0){
            x = comando[i][4];
            y = comando[i][7];
            strcpy(comando[i], " ");
            sprintf(comando[i], "%c -= %c", x, y);
            printf("%s\n", comando[i]);
        }
        if (strncmp(comando[i], "and", 3) == 0){
            x = comando[i][4];
            y = comando[i][7];
            strcpy(comando[i], " ");
            sprintf(comando[i], "%c = %c & %c", x, x, y);
            printf("%s\n", comando[i]);
        }
    }

    return 0;
}