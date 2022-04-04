/* Demosntrando RGB */

#include <stdio.h>

typedef struct {
   unsigned char red, green, blue;
} RGB;

int main () {

   RGB tela[5000][3000];

   tela[1235][2069].red = 200;
   tela[1235][2069].green = 2;
   tela[1235][2069].blue = 145;

   return 0;
}