# include <stdio.h>
# include <stdlib.h>
# include <string.h>

// Verificando os numeros primos
int verif_primo(int a)
{

   int i, somador=0;

   for(i = 1; i<=a ; i++) { //A passagem de A -> Ver se for primo
      if(a % i == 0) {
         somador ++; //Caso entre, contador soma +1
      }
   }
   if(somador  == 2) { //Verdadeiro
      return 1; 
   }
   else { //Falso
      return 0;
   }
} 

int main ()
{

   long int i ,j, x = 0, tag=0, temp=0, tnnt=0;
   long int soma1 = 0, colocacao = 0, soma2 = 0, loop = 0, huf = 0;
   long int tam = 0, pri_vetr[1000];
   char ver_teste[100];

   for(i=1; i<=5000; i++) {
      if(verif_primo(i) == 1) {
         pri_vetr[x] = i;
         x++;
      }
   }
   scanf("%s", ver_teste);

   tam = strlen(ver_teste);
      
   for(i=0; i<tam; i++){
      soma1 += ver_teste[i];
   } 
   for(i = 0; tag == 0 ; ) {
      
      scanf("%ld", &colocacao);
      soma2 += colocacao;
      loop++;
      for(j = 0; j<400 && huf == 0; j++) {
         if(soma1 % pri_vetr[j] == 0 && pri_vetr[j] > 0){
            temp++;
         }
         if(temp == 3 || j == 399){
            huf = 1;
         }
      }
         
      if(soma1%17 == 0){
         printf("Agora estou Putin, Bonxai!\n"); 
         tag = 1;
      } 

      if(temp == 3 && tnnt == 0){
         soma1 = soma1 * 3;
         tnnt = 1;
      }
      else if(soma2 < soma1 && loop == 6){
         printf("Bonxai foi de base.\n");
         tag=1;
      }
      else if(soma2 > soma1 && loop <= 6){
         printf("Agora voce passou dos limites!\n");
         tag=1;
      }
      else  if(soma2 == soma1 && loop <= 6){
         printf("Parabueins! Voce ajudou Bonxai a escapar.\n");
         tag=1;
      }
      i++;
   }


   return 0;
}