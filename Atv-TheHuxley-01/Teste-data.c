#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int dia, mes, ano, ano_bissexto;
  scanf("%d %d %d", &dia, &mes, &ano);

  ano_bissexto = (((ano % 4 == 0) && (ano % 100 > 0)) || (ano % 400 == 0));

    if ((dia >= 1 && dia <= 29) && mes == 2 && ano_bissexto == 1 && (ano >= 1900 || ano <= 2100)) {
    printf("valida");
  } else if ((dia >= 1 && dia <= 28) && mes == 2 && ano_bissexto != 1 && (ano >= 1900 || ano <= 2100)) {
    printf("valida");
  } else if ((dia >= 1 && dia <= 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
   && (ano >= 1900 && ano <= 2100)) {
     printf("valida");
   } else if ((dia >= 1 && dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11) && (ano >= 1900 && ano <= 2100)) {
     printf("valida");
   } else {
     printf("invalida");
   }

  return 0;
}