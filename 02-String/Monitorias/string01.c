#include <stdio.h>
#include <string.h>

int main() {

    char palavra[] = "abc";
    int tam = sizeof(palavra);
    printf("%d\n", tam);

    /*Resultado será 4 por conta do caracter nulo -> '\0'*/
    return 0;
}