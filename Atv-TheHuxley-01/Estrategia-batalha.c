/* Estrategia de Batalha */
#include <stdio.h>
#include <math.h>
/*
    Verificar se a quantidade do exercito A é maior do que o exercito B + Reforco
    1. É preciso entender que só uma das opcao tendo mais em A nao eh suficiente para avancar
    2. Eh preciso verificar outros pontos que compoe o exercito, como, tanque, aviao...
*/

int main() {

    int soldA,tanqA,aviA,lanmisA; //Aliados
    int soldB,tanqB,aviB,lanmisB; //Inimigos
    int soldR,tanqR,aviR,lanmisR; //Ajuda Inimiga
    int somasd, somatq, somaav, somalc; //Verificadores de quantidade
    int x=0, y=0; //Contadores

    //Recebendo os valores
    scanf("%d %d %d %d", &soldA, &tanqA, &aviA, &lanmisA); //Exer A
    scanf("%d %d %d %d", &soldB, &tanqB, &aviB, &lanmisB); //Exer B
    scanf("%d %d %d %d", &soldR, &tanqR, &aviR, &lanmisR); //Exer Reforco B

    somasd = soldB + soldR; // Soma soldados
    somatq = tanqB + tanqR; // soma tanque
    somaav = aviB + aviR; // Soma aviao
    somalc = lanmisB + lanmisR; // soma lanca misseis

    if (soldA > somasd){ // Soldados
        x += 1;
    }
    if (soldA < somasd){
        y += 1;
    }

    if (tanqA > somatq){ // Tanques
        x += 1;
    }
    if (tanqA < somatq){
        y += 1;
    }

    if (aviA > somaav){ // Aviso
        x += 1;
    }
    if (aviA < somaav){
        y += 1;
    }

    if (lanmisA > somalc){ // Lanca
        x += 1;
    }
    if (lanmisA < somalc){
        y += 1;
    }

    if (x>2){
        printf("Avancar");
    }
    // Se os contadores forem maiores que 2 temos resultados
    else if(y>2){
    printf("Recuar");
    }
    else{
        printf("Permanecer");
    }
    return 0;
}