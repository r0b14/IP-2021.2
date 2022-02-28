/* Ajude o Leo /
#include <stdio.h>
#include <math.h>

int main()
{
    int x, y;
    int n1, n2, n3, n4;
    int a = 0, b = 0;
    int eqx, eqy;
    int eqt = 0;


    scanf("(%d, %d)",&x, &y);
    scanf("%dx^%d - %d*y^%d", &n1, &n2, &n3, &n4);

    a = (pow(x, n2));
    b = (pow(y,n4));
    eqx = n1 * a; 
    eqy = n3 * b;

    eqt= eqx - eqy;

    if (eqt != 0){
        printf("a fun��o est� definida em (%d,%d)", x, y);
    }
    else {
        printf("a fun��o n�o est� definida em (%d,%d) .-.", x, y);
    }

    return 0;
}