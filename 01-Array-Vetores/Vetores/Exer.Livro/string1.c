    /* 
    Figura 6.10: fig06_10.c
    Tratando arrays de caracteres como strings
    Inserindo espaço entre os caracteres
    */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* função main inicia a execução do programa */
int main( void )
{
    char string1[20]; /* reserva 20 caracteres */
    char string2[] = "string literal"; /* reserva 14 + '\0' caracteres mediante a string inserida */
    int i; /* contador */

    /* lê substring do usuário para array string1 */
    printf("Digite uma string: ");
    scanf("%s", string1 ); /* entrada terminada com espaço em branco ou enter*/

    /* mostra strings */
    printf( "string1 é: %s\nstring2 is: %s\n"
    "string1 com espaços entre caracteres é:\n",
    string1, string2 );

    /* mostra caracteres até o caractere nulo ser alcançado */
    for ( i = 0; string1[ i ] != '\0'; i++ ) { // Ate chegar ao caracter nulo '/0'
    printf( "%c ", string1[ i ] ); /* inserindo espacos entre os caracteres */
    } /* fim do for */

    printf("\n");

    return 0; /* indica conclusão bem-sucedida */
} /* fim do main */