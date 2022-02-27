#include <stdio.h>

int main()
{
    int grana, x, y, z, am;
    int verde1, vermelho1, roxo1, amarelo1;
    scanf("%d %d %d %d %d", &grana, &x, &y, &z, &am);

    verde1 = 80/x;
    vermelho1 = 100/y;
    roxo1 = 120/z;
    amarelo1 = 80/am; 

    if ((grana>x) || (grana>y) || (grana>z) || (grana>am)){
        if ((verde1 >= vermelho1) && (verde1 >= roxo1) && (verde1 >= amarelo1)){
            printf("Verde");
        }
        if ((vermelho1 > verde1) && (vermelho1 >= roxo1) && (vermelho1 >= amarelo1)){
            printf("Vermelho");
        }
        if ((roxo1 > verde1) && (roxo1 > vermelho1) && (roxo1 >= amarelo1)){
            printf("Roxo");
        }
        if ((amarelo1 > verde1) && (amarelo1 > vermelho1) && (amarelo1 > roxo1)){
            printf("Amarelo");
        }
    }
    else {
        printf("Acho que vou a pe :(");
    }
}

