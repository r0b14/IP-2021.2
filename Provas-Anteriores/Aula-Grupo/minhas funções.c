Minhas funções:

Para achar primos:
int primo(int possivelprimo) {
    int divisores = 0;
    for (int divisor = 1; divisor <= possivelprimo; divisor++) {
        if (possivelprimo % divisor == 0) divisores++;
    }
    if (divisores == 2) return 1;
    else return 0;
}

Calcula o numero fatorial
int fat(int n) {
	int fatorial = 1;
	for (; n > 0; n--)
		fatorial = fatorial * n;
	return fatorial;
}

Ajusta Dias
int ajustaDias (int bissexto, int mes, int sinal) {
        //quantidade de dias
        if ((bissexto == 1) && (mes == 2)) {
            return 29 * sinal;
            }
        else if ((bissexto == 0) && (mes == 2)) return 28 * sinal;
        else {
            if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
            return sinal * 30;
        }
        else {
            return sinal * 31;
        }
        }
     }

Ordena crescentemente vetor de inteiro
void OrdenaVetor(int vetor[], int tam) {
    int i, j, min, aux;
   for( i=0; i < tam; i++) {
        min = i;
        for(j= i+1; j< tam; j ++) {
            if (vetor[j] < vetor[min]) min = j;
        }
        aux=vetor[i];
        vetor[i]=vetor[min];
        vetor[min]=aux;
    }
}

Preenche Matriz:
void PreencheMatriz (int tam, char matriz[][tam][31]) {
     for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            scanf(" %s", matriz[i][j]);
        }
    }
}

Ordem alfabetica
void ordemAlfabetica ( int quantidadeDeInscritos, char vetor[][10]) {
  char aux[10];
 int i, j, min;
   for( i=0; i < quantidadeDeInscritos; i++) {
        min = i;
        for(j= i+1; j< quantidadeDeInscritos; j ++) {
            if ( strcmp(vetor[j], vetor[min]) < 0) min = j;
        }
        strcpy (aux, vetor[i]);
        strcpy (vetor[i], vetor[min]);
        strcpy (vetor[min], aux);
    }
}

