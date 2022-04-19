#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//void *malloc (size_t tam);
//void *calloc( size_t num, size_t tam);
//void *realloc(void *prt, size_t tam);
//void free(void * prt);

// uso do malloc;
/*
int main(){
double *p;
int N, numero, i;

printf("Qual tamanho do vetor");
scanf("%d",&N);
p = (double *) malloc(N*sizeof (double));

if (p==NULL){
    printf("Alocacao falhou.Finalizado.\n");
    exit(1);
}
for (i=0; i < N; i++){
    printf("Digite o valor %d do vetor:", i);
   // scanf("%1f",p+i);
    scanf("%lf",&p[i]);
}
for (i=0; i <N; i++){
   //printf("%.2lf \n:", *(p+i));
   printf("%.2lf \n",p[i]);
}
free(p);
return 0;
}


// caloc


int main(){
double *p;
int N, M, numero, i;

printf("Qual tamanho do vetor: ");
scanf("%d",&N);

p = (double *) calloc(N, sizeof (double));

if (p==NULL){
    printf("Alocacao falhou.Finalizado.\n");
    exit(1);
}
for (i=0; i < N; i++){
printf("%.2lf \n", (p+i));

//calloc preenche os espacos com zero
}

for (i=0; i < N; i++){
    printf("Digite o valor %d do vetor:", i);
    scanf("%1f",p+i);
    //scanf("%lf",&p[i]);
}
printf(" qual o Novo valor: ") ;
    scanf("%d",&M);

p = (double *) realloc(p,M*sizeof(double));

for (i=0; i < M; i++){
printf("%.2lf \n", (p+i));
}
printf(" Novo valor de M: %d", M);

//p = (double *) realloc(p,M*sizeof(double));

if (p==NULL){
    printf("Realocacao falhou.Finalizado.\n");
    exit(1);
}
for (i=0; i<M; i++){
 printf(" digite o novo valor %d do vetor:", i);
scanf("%lf", p+i);
}

for (i=0; i <M; i++){
 printf("%.2lf \n", *(p+i));

}
free(p);
return 0;
}
*/
