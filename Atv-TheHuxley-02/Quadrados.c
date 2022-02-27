/* A diferenca dos quadrados */

#include <stdio.h>
#include <math.h>

int main()
{

   int x, y, entrada, verif;

   while(scanf("%d", &entrada)){

      if(entrada == 0){
         break; //Parada
      }
      verif = ((entrada + 1) /2);
      x = pow(verif,2);
      y = (verif - 1) * (verif - 1);

      printf("%d - %d\n",x,y);
   }

   return 0;
}