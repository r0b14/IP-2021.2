/* Estrat�gia de Batalha */
#include <stdio.h>

int main()
{
    int sdali, tqali, avali, lcali; // aliado
    int sdini, tqini, avini, lcini; // inimigo
    int sdref, tqref, avref, lcref; // refor�o inimigo
    int sdsoma, tqsoma, avsoma, lcsoma, x=0, y=0;

    scanf("%d %d %d %d", &sdali, &tqali, &avali, &lcali);
    scanf("%d %d %d %d", &sdini, &tqini, &avini, &lcini);
    scanf("%d %d %d %d", &sdref, &tqref, &avref, &lcref);

    sdsoma = sdini + sdref; // Soma das tropas inimigas
    tqsoma = tqini + tqref;
    avsoma = avini + avref;
    lcsoma = lcini + lcref;

    if (sdali>sdsoma){ // Soldados
        x += 1;
    }
    if (sdali<sdsoma){
        y += 1;
    }

    if (tqali>tqsoma){ // Tanques
        x += 1;
    }
    if (tqali<tqsoma){
        y += 1;
    }


    if (avali>avsoma){ // Aviso
        x += 1;
    }
    if (avali<avsoma){
        y += 1;
    }


    if (lcali>lcsoma){ // Lanca
        x += 1;
    }
    if (lcali<lcsoma){
        y += 1;
    }

    if (x>2){
        printf("Avancar");
    }
    else if(y>2){
    printf("Recuar");
    }
    else{
        printf("Permanecer");
    }
    return 0;
}