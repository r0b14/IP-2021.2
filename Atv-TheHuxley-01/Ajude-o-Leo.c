/* Ajude o Leo*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n1, n2, n3, n4;
    int x, y;
    int equax, equay;
    int equaw = 0, a = 0, b = 0;

    scanf("(%d, %d)",&x, &y);
    scanf("%dx^%d - %d*y^%d", &n1, &n2, &n3, &n4);

    a = (pow(x, n2));
    b = (pow(y, n4));
    equax = n1 * a; 
    equay = n3 * b;

    equaw = equax - equay;

    if (equaw != 0){
        printf("a função está definida em (%d,%d)", x, y);
    }
    else {
        printf("a função não está definida em (%d,%d) .-.", x, y);
    }

    return 0;
}