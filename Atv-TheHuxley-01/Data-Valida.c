/* Data Valida */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
  Basicamente verificar se a data inserida pelo usuario eh valida
  1. verificar qual o dia que foi inserido
  2. Verificar se o mes eh fev ou se sao os meses que sao 31 ou 30
  3. verificar o ano que foi inserido caso seja fev e o dia seja 29
*/

int main() {

  int dia, mes, ano, ano_bissexto;
  scanf("%d %d %d", &dia, &mes, &ano); //Coletando informacoes

  ano_bissexto = (((ano % 4 == 0) && (ano % 100 > 0)) || (ano % 400 == 0)); // Verificando se o ano eh bissexto

  //Verificando se a data eh referente ao ano bissexto
  if ((dia >= 1 && dia <= 29) && mes == 2 && ano_bissexto == 1 && (ano >= 1900 || ano <= 2100)){
    printf("valida");
  }
  //Verificando a data inserida pelo usuario referente ao mes de fev
  else if ((dia >= 1 && dia <= 28) && mes == 2 && ano_bissexto != 1 && (ano >= 1900 || ano <= 2100)){
    printf("valida");
  }
  //Verificando meses que sao 31 e se a data se encaixa
  else if ((dia >= 1 && dia <= 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        && (ano >= 1900 && ano <= 2100)){
     printf("valida");
  }
  //Verificando meses que sao 30 e se a data se encaixa
  else if ((dia >= 1 && dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11) && (ano >= 1900 && ano <= 2100)) {
    printf("valida");
  }
  //Caso a data não se encaixe em nenhuma das condicoes...
  else {
    printf("invalida");
  }

  return 0;
}