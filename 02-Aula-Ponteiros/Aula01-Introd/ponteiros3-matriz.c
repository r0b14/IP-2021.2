#include <stdio.h>


int main()
{

    int mat[2][2] = { {3, 4},
                      {3, 4}
                    };
    int *pMat = mat;
    int i;
    for ( i = 0 ; i < 4 ; i++){
        printf("pMat{%d}=%d\n", i+1, pMat[i]);
    }
    return 0;
}