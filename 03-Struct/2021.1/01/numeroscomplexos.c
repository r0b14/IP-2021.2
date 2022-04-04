#include <stdio.h>
#include <math.h>

typedef struct {
   float pReal, pImag;
} Complexo;

int main() {
   
   Complexo c = {3.5, -2}; // 3.5 -2i

   printf("%.1f %c %.1f\n", c.pReal, (c.pImag >= 0 ? '+' : '-'), fabs(c.pImag));

   return 0;
}