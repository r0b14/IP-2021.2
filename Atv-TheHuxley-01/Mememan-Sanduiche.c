/*Meme Man Sanduiche*/
#include <stdio.h>

int main()
{

  char i0, i1, i2, i3, i4, i5, i6;
  scanf("%c%c%c%c%c%c%c", &i0, &i1, &i2, &i3, &i4, &i5, &i6);
  int x = 0; //Contador

  if (i5 != 'P') { // Eh obrigatorio o uso de molho picante no ultimo ingrediente (T4)
    printf("Invalido\n...Mas pelo menos ganhou um chute\n");
  }
  else {
    // O uso de pao - T1
    if (((i0 == '.') || (i0 == ':') || (i6 == '.') || (i6 == ':')) && (i0 == i6)) {
      x++; 
    }
    //Uso da carne - T2
    if ((i1 == 'b') || (i1 == 'f') || (i1 == 'p') || (i1 == ' ')) {
      x++;
    }
    //Uso do extra - T3
    if ((i2 == 'A') || (i2 == 'T') || (i2 == 'C')  ||(i2 == 'R') || (i2 == ' ')) {
      x++;
    }
    //Uso do extra - T3
    if ((i3 == 'A') || (i3 == 'T') || (i3 == 'C') || (i3 == 'R') || (i3 == ' ')) {
      x++;
    }
    //Uso do extra - T3
    if ((i4 == 'A') || (i4 == 'T') || (i4 == 'C') || (i4 == 'R') || (i4 == ' ')) {
      x++;
    }
    //Uso do Molho - T4 casca de banana
    if (i5 == 'P') {
      x++;
    }
    //Verificando contador
    if (x == 6) {
      printf("Valido\n");
    }
    else {
      printf("Invalido\n");
    }
  }
  return 0;
}