#include <stdio.h>
#include <math.h>

int main() {

  int soldA,tanqA,aviA,lanmisA; //Aliados
  int soldB,tanqB,aviB,lanmisB; //Inimigos
  int soldR,tanqR,aviR,lanmisR; //Ajuda
  int somasd, somatq, somaav, somalc; //Verificadores
  int x=0, y=0; 

  //Recebendo os valores
  scanf("%d %d %d %d", &soldA, &tanqA, &aviA, &lanmisA);
  scanf("%d %d %d %d", &soldB, &tanqB, &aviB, &lanmisB);
  scanf("%d %d %d %d", &soldR, &tanqR, &aviR, &lanmisR);

  somasd = soldB + soldR;
  somatq = tanqB + tanqR; 
  somaav = aviB + aviR;
  somalc = lanmisB + lanmisR; 
   
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
    else if(y>2){
    printf("Recuar");
    }
    else{
        printf("Permanecer");
    }
    return 0;
}