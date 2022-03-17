/* Aula sobre string 2021.1 */
#include <stdio.h>
#include <string.h>
/**
 * Recebendo Valores dos usuários -> strings 'scanf'
 * No scanf não preciso utilizar o &
 * O scanf(" %s", name) -> vai ser capturado um nome até o espaço em branco ' ' ou enter.
 *    ele vai cortar o seu caracteres no espaço em branco -> ele vai convertido em caracter nulo.
 *    ' ' -> espaço em branoco é ASCII = 32
 * Resolvendo o problema do espaço em branco -> scanf(" %[^\n]", name);
 *    Colete todos os caracteres do vetor até o \n
 *    essa forma apresenta um risco grande, pois não conseguimos limitar e isso pode acontecer invasão de memoria
 * Resolvendo o problema de invasão	de memoria -> scanf(" %29[^\n]", name);
 *    Vai inserir o tamanho do vet - 1 após a %
 * GETS -> gets(name);
 *    há o problema de invasão de memoria;
 * FGETS -> fgets(name, SIZE - 1, stdin);
 *    Essa é uma função de arquivos, mas nos ajuda a capturar strings.
 *    CUIDADO - Ele captura o ENTER
 *    stdin -> informa que vai ser via teclado.
 **/

#define SIZE 30

int main() {

   char name[SIZE];
   printf("What is your name: ");

   //scanf(" %s", name); Contornando esse problema
   //scanf(" %29[^\n]", name);
   //gets(name);
   //fgets(name, SIZE - 1, stdin);

   printf("your name is: %s", name);

   return 0;
}