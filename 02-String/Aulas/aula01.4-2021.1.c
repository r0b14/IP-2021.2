/* Aula sobre string 2021.1 */
#include <stdio.h>
#include <string.h>
/**
 * Funções que nos ajudam no dia a dia.
 * strlen(string) -> vai dizer o tamanho da string
 * strcpy(string, "Robson"); -> parece uma atribuição de string
 *    Vai fazer com o conteúdo que está dentro mude
 *    Pode usar uma variavel
 * strcat(string, "Thiago") -> concatenação de string
 *    string já tinha um valor = Robson
 *    e inserir a mais o "Thiago".
 * strcmp(string1, string2)
 *    0 -> string1 == string2
 *    >0 -> string1 > string2
 *    <0 -> string1 < string2
 *    strcmp(x, y)
 *        0 <=> x == y
 *       >0 <=> x > y
 *       <0 <=> x < y
 **/

#define SIZE 30

/*
int main() {

   char name[SIZE];

   strcpy(name, "Robson");
   strcat(name, " Thiago");

   printf("your name is: [%s]\n", name);
   printf("Vector size: %d", strlen(name));

   return 0;
}
*/

// Fazendo comparações entre strings
int main() {

   char name1[SIZE] = "Robson Thiago";
   char name2[SIZE] = "Robison", res;

   if((res = strcmp(name1, name2)) == 0) {
      printf("Iguais\n");
   } else {
      printf("Diferentes: %d\n", res);
   }


   return 0;
}
