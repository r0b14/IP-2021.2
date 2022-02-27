/* Primos dos Zecas */

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main(void){

    int numer1, numer2, div1, ver_primo = 0, div=0;
    int pmo1 = 0, k = 0 ,i = 0, j;
    int pri1 = 0, div2 = 0, zaca = 0, zacarias = 0, pri2 = 0;
    
    scanf("%d %d", &numer1 , &numer2);

    while (numer1 <= numer2){
      div1 = 0;
      for( i = 1; i <= numer1; i++){
         if ( numer1 % i == 0) {
               div1++;
         }
      }
      if (div1 == 2){
         for (ver_primo = numer1 - 1; 2 <= ver_primo; ver_primo--){
               div = 0;
               for( j = 1; j <= ver_primo; j++) {
                  if (ver_primo % j == 0){
                        div++;
                  } 
               }
               if (div == 2) {
                  pmo1 = ver_primo;
                  ver_primo = 1;
               }
         }
         for (pri1 = numer1 + 1; pri1 <= 2003; pri1++){
                div2 = 0;
                for (k = 1; k <= pri1; k++){
                  if (pri1 % k == 0){
                        div2++; 
                  }
               }
               if (div2 == 2){
                  pri2 =pri1;
                  pri1 = 2004;
               }
         }
         zacarias = ((pmo1 + pri2) /2);
         if (zacarias == numer1 && pmo1 != 2){
                zaca++;
         }
      }
      numer1++;
   }

   printf("%d\n", zaca);

   return 0;

}