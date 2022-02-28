/* Yoshi o Melhor amigo */
#include <stdio.h>
/*
    1. O custo beneficio e medido pela velocidade/preco
*/

int main()
{
    int dinheiro, verde, vermelho, roxo, amarelo;
    int verde1, vermelho1, roxo1, amarelo1;
    scanf("%d", &dinheiro);
    scanf("%d %d %d %d", &verde, &vermelho, &roxo, &amarelo);

    verde1 = 80/verde;
    vermelho1 = 100/vermelho;
    roxo1 = 120/roxo;
    amarelo1 = 80/amarelo; 

    //Verificando se o dinheiro que ele tem da p/ comprar pelo menos 1
    if ((dinheiro > verde) || (dinheiro > vermelho) || (dinheiro > roxo) || (dinheiro > amarelo)){
        //Verificando a preferencia do mario
        if ((verde1 >= vermelho1) && (verde1 >= roxo1) && (verde1 >= amarelo1)){
            printf("Verde");
        }
        //Preferencia 2
        if ((vermelho1 > verde1) && (vermelho1 >= roxo1) && (vermelho1 >= amarelo1)){
            printf("Vermelho");
        }
        //Preferencia 3
        if ((roxo1 > verde1) && (roxo1 > vermelho1) && (roxo1 >= amarelo1)){
            printf("Roxo");
        }
        //preferencia 4
        if ((amarelo1 > verde1) && (amarelo1 > vermelho1) && (amarelo1 > roxo1)){
            printf("Amarelo");
        }
    }
    else {
        printf("Acho que vou a pe :(");
    }
}

