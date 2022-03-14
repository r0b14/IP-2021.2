#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 7512346;
    int i;
    char *pNum = {char*} &num;
    
    for (i = 0; i < 4; i++){
        printf("pNum{%d}")
    }

    return 0;
}