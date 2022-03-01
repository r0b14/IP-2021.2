#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {

   int vet[1000000] = {0};
   int sz, i, j, n, k;
   int c = 0;

   sz = 0;
   while( scanf("%d", &n) != EOF ){
      vet[sz] = n;
      sz++;
   }
   //Bouble Sort
   for( i = 0; i < sz-1; i++ ){
      for( j = 0; j < sz-i-1; j++ ){
         if( vet[j] > vet[j+1]){
            int sup = vet[j];
            vet[j] = vet[j+1];
            vet[j+1] = sup;
         }
      }
   }
   for(i=0; i < sz; i+=2){
       if( vet[i] != vet[i+1]){
         c++;
         k=i;
         i--;
      }
   }

   for(i=0; i < sz; i++){
      printf("%d ", vet[i]);
   }
   if( c == 0 ){
      printf("\n0");
   }
   else{
      printf("\n%d", vet[k]);
   }

   return 0;
}