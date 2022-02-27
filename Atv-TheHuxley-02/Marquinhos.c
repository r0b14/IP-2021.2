/* Marquinhos e o telefone borrado */
#include <stdio.h>

// Verificando os numeros primos
int verif_primo(int a)
{

   int i, somador=0;

   for(i = 1; i<=a ; i++) { // A passagem de A -> Ver se for primo
      if(a % i == 0) {
         somador ++; // Caso entre, contador soma +1
      }
   }
   if(somador  == 2) { // Verdadeiro
      return 1; 
   }
   else { // Falso
      return 0;
   }
} 

int main ()
{

  int i, t, j, x, y, z, a = 0, b = 0, primo_zeca=0, tag=0, pri_1, pri_2;
  int vet1[20100], vet2[1000];

   scanf("%d__%d-%d", &x, &y, &z);

   for(i=0 ; i<=9 ; i++){
      for(j=0; j<=9; j++){
      vet2[b] = (i*10) + j;
         b++;
      }
   } 

   for(t=0 ; t<b ; t++){
      pri_1= vet2[t] / x;
      pri_2= vet2[t] / y;
    
      if(verif_primo(pri_1) == 1 && verif_primo(pri_2) == 1) {
          if(vet2[t] < 10){
            printf("%d0%d%d-%d\n",x ,vet2[t] ,y ,z);
         } else
            if (vet2[t] >= 10){
            printf("%d%d%d-%d\n",x ,vet2[t] ,y ,z);  
         }
      } 

   }

   return 0;
}