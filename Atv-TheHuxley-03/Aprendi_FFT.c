/*Aprendi FFT*/
#include <stdio.h>

/*
   1. Receber 2 inteiros n >= 2 e m <= 1000 -> Grau do polinomio
   2. Quantidade de coenficiente n+1 e m+1
   3. Uma linha para cada caso: n+m+1 -> C(x) = A(x) * B(x)
*/

int main() {

   int n, m; // Recebores
   int i, j, cont = 0; // Contadores

   while(scanf("%d %d", &n, &m) != EOF) {
      cont++; // Contador
      int polinoA[n + 1], polinoB[m + 1], matriz_result[n + 1][n + m + 1]; // Polinomios baseados no 1,2 e 3
      for (i = 0; i < n + 1; i++){ // Percorrendo o polinomio n
         scanf("%d", &polinoA[i]);
      }
      for (i = 0; i < m + 1; i++){ // Percorrendo o polinomio m
         scanf("%d", &polinoB[i]);
      }
      for (i = 0; i < n + 1; i++){ // Fator mais externo da matriz ()
         for (j = 0; j < n + m + 1; j++){ // Fator mais interno da matriz ()
            matriz_result[i][j] = 0;
         }
      }
      for (i = 0; i < n + 1; i++){ // Fator mais externo da matriz ()
         for (j = 0; j < m + 1; j++){ // Fator mais interno da matriz ()
            matriz_result[i][j + i] = polinoA[i] * polinoB[j]; // Multiplicando os polinomios
         }
      }
      printf("Caso #%d: ", cont);

      for (i = 0; i < m + n + 1; i++){
         int valor = 0;
         for (j = 0; j < n + 1; j++){
            valor += matriz_result[j][i];
         }
         if (i < n + m){
            printf("%d ", valor);
         }
         else{
            printf("%d", valor);
         }
      }
      printf("\n");

   }

   return 0;
}