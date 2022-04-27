#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

   // Criamos um variável do tipo arquivos e precisamos definir um ponteiro para ela.
   FILE *pont_arq; // ponterio para um arquivo

   // abrindo o arquivo
   pont_arq = fopen("arquivo.txt", "a");

   // fechando arquivo
   fclose(pont_arq);

   // mensagem para o usuário
   printf("O arquivo foi criado com sucesso!");

   system("pause");
   return (0);

   return 0;
}