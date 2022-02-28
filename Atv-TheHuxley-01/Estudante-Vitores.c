/*Estudante Vitoris*/
#include <stdio.h>
#include <math.h>

/*
  Verificar quais operacoes entre A e B resulta C
  1. Verificar se resultado (C) se encaixa em alguma operacao
*/

int main() {

  int a,b,c;
  int quada, quadb, rest, mult, div, soma, sub;

  //Recebendo valores do usuario
  scanf("%d %d %d",&a ,&b ,&c);

  quada = pow(a,2); //Quadrado A
  quadb = pow(b,2); //Quadrado B - Desnecessario
  rest = a % b; // Resto|Modulo
  mult = a * b; // Multiplicacao
  div = a / b; // Divisao
  soma = a + b; // Soma
  sub = a - b; // Subtracao

  //Logica do programa
  //Primeira verificacao -> Quadrado
  if((quada == c) || (quadb == c)) {
    printf("Quadrado Vitoris\n");
    if (rest == c) {
      printf("tambem Vitoris\n");
    } if (mult == c) {
      printf("tambem Multi\n");
    } if (div == c) {
      printf("tambem Div\n");
    } if (soma == c) {
      printf("tambem Soma\n");
    } if (sub == c) {
      printf("tambem Sub\n");
    }
  }
  //Senao se, ...
  //Primeira verificacao -> Resto
  else if (rest == c) {
    printf("Resto Vitoris\n");
    if (mult == c) {
      printf("tambem Multi\n");
    } if (div == c) {
      printf("tambem Div\n");
    } if (soma == c) {
      printf("tambem Soma\n");
    } if (sub == c) {
      printf("tambem Sub\n");
    }
  }
  //Senao se,
  //Primeira Verificao -> multiplicacao
  else if (mult == c) {
    printf("Multi Vitoris\n");
    if (div == c) {
      printf("tambem Div\n");
    } if (soma == c) {
      printf("tambem Soma\n");
    } if (sub == c) {
      printf("tambem Sub\n");
    }
  }
  //Senao se,
  //Primeira Verificao -> divisao
  else if (div == c) {
    printf("Div Vitoris\n");
    if (soma == c) {
      printf("tambem Soma\n");
    } if (sub == c) {
      printf("tambem Sub\n");
    }
  }
  //Senao se,
  //Primeira Verificao -> soma
  else if (soma == c) {
    printf("Soma Vitoris\n");
      if (sub == c) {
      printf("tambem Sub\n");
    }
  }
  //Senao se,
  //Primeira Verificao -> Sub
  else if (sub == c) {
    printf("Sub Vitoris\n");
  }
  //Ultima verificacao
  //Apos todos os if e else if ele obrigatóriamente entra nessa condicao.
  //entretanto, se o resultado da condicao for 0 ele nao a executa.
  if ((quada != c) && (quadb != c) && (rest != c) && (mult != c) && (div != c) && (soma != c) && (sub != c)) {
    printf("Impossivel vitores");
  }

  return 0;

}