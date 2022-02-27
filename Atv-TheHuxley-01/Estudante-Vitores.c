#include <stdio.h>
#include <math.h>

int main() {

  int a,b,c;
  int quada, quadb, rest, mult, div, soma, sub;

  //Recebendo valores do usuario
  scanf("%d %d %d",&a ,&b ,&c);

  quada = pow(a,2);
  quadb = pow(b,2);
  rest = a % b;
  mult = a * b;
  div = a / b;
  soma = a + b;
  sub = a - b;

  //Logica do programa
  if ((quada == c) || (quadb == c)) {
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
  else if (div == c) {
    printf("Div Vitoris\n");
    if (soma == c) {
      printf("tambem Soma\n");
    } if (sub == c) {
      printf("tambem Sub\n");
    }
  }
  else if (soma == c) {
    printf("Soma Vitoris\n");
      if (sub == c) {
      printf("tambem Sub\n");
    }
  }
  else if (sub == c) {
    printf("Sub Vitoris\n");
  }
  if ((quada != c) && (quadb != c) && (rest != c) && (mult != c) && (div != c) && (soma != c) && (sub != c)) {
    printf("Impossivel vitores");
  }

  return 0;

}