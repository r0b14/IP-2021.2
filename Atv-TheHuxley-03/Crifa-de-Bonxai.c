#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int n, mudar, i; //contador
    scanf("%d", &n); //recebendo a quantidade

    char nome[n]; //Criando o vetor do tamanho infomador
    int decof[n]; //Vetor decodificado
    for (i = 0; i < n; i++) { //Recebendo a string do usuario
        scanf(" %c", &nome[i]);
        // Tranformando em inteiro
        decof[i] = nome[i];
    }

    scanf("%d", &mudar); //Lendo Deslocamento
    if (mudar > 26)
        // transoformando um loop
        mudar %= 26;
    //Somar mudar
    for (i = 0; i < n; i++){
        decof[i] += mudar;
        if (decof[i] > 122){
            decof[i] -= 26;
        }
    }
    for (i = 0; i < n; i++){ //Printrando a string final
        printf("%c", decof[i]);
    }
    return 0;
}