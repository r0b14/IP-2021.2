#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int* lerNumeros(int *numQtd, int *lista) {

    int i;
    lista = (int*)realloc(lista, (*numQtd) * sizeof(int));

    if (lista == NULL) {
      printf("Problema na alocacao :(\n");
      exit(1);
    }
    
    for(i = 0; i < *numQtd; i++){
        printf("Digite o %d� numero: ", i+1);
        scanf("%d", &lista[i]);
    }

    return lista;
}

void criarArquivo(FILE *arqAux, int *numQtd, int *lista) {

    arqAux = fopen("Numeros.bin", "wb");
     if(arqAux == NULL){
        printf("Erro ao abrir o Arquivo");
        fclose(arqAux);
        exit(-1);
      }
    
    fwrite(lista, sizeof(int), *numQtd, arqAux);
    fclose(arqAux);
}

void lerArquivo(FILE *arqAux, int *numQtd,int *lista){
    
     arqAux = fopen("Numeros.bin", "rb");
      if(arqAux == NULL){
        printf("Erro ao ao ler o Arquivo");
        fclose(arqAux);
        exit(-1);
       }
     
     while (fread(lista, sizeof(int), *numQtd, arqAux) != 0){
        lista = (int *)realloc(lista, *numQtd * sizeof(int));
        if (arqAux == NULL){
            printf("Erro ao alocar\n");
            exit(-1);
        }else{
            printf("\nArquivo lido com sucesso\n\n");
        }
      } 

    fclose(arqAux);
}
void criarArquivoPares(FILE *arqPares, int *qtdPares, int *lista){
    
    arqPares = fopen("Pares.bin", "wb");
     if(arqPares == NULL){
        printf("Erro ao abrir o Arquivo");
        fclose(arqPares);
        exit(-1);
      }else{
        printf("Arquivos Pares.bin criado com sucesso");
      }
    
    fwrite(lista, sizeof(int), *qtdPares, arqPares);
    fclose(arqPares);
}
void lerArquivoPares(FILE *arqPares, int *qtdPares, int *listaPares){
    
     arqPares = fopen("Numeros.bin", "rb");
      if(arqPares == NULL){
        printf("Erro ao ao ler o Arquivo");
        fclose(arqPares);
        exit(-1);
       }
     
     while (fread(listaPares, sizeof(int), *qtdPares, arqPares) != 0){
        listaPares = (int *)realloc(listaPares, (*qtdPares) * sizeof(int));
        if (arqPares == NULL){
            printf("Erro ao alocar\n");
            exit(-1);
        }else{
            printf("\nArquivo lido com sucesso\n\n");
        }
      } 

    fclose(arqPares);
}


void menu(){
    
    int op = 0, numQtd;
    int i;
    int *listaPares = NULL;
    int qtdPares = 0;
    int *lista = NULL;
    FILE *arq = NULL;
    FILE *arqPares = NULL;
    
    printf("Digite a quantiade de numeros desejados: ");
    scanf("%d", &numQtd);

    lista = lerNumeros(&numQtd, lista);
    while(op != 3){

        printf("\n1 - Criar Arquivo\n2 - Ler Arquivo\n3 - Criar Arquivos Pares\n4 - Ler arquivos de pares\n5 - Sair\n");
        printf("opcao: ");
        scanf("%d", &op);
        switch(op){
            case 1: 
              criarArquivo(arq, &numQtd, lista);
              printf("\nArquivo criado com sucesso\n");
               break;
            case 2:
              lerArquivo(arq, &numQtd, lista);
                for(i = 0; i < numQtd; i++){
                  if(lista[i] % 2 == 0){
                     //printf("%d\n", lista[i]);
                     listaPares[i] = lista[i];
                     qtdPares++;
                  }
                }
               break;
            case 3: 
              criarArquivoPares(arqPares, &qtdPares, listaPares);
              printf("Arquivo Pares criado com sucesso");
            case 4:
              lerArquivoPares(arqPares, &qtdPares, listaPares);

              printf("\nArquivo lido com sucesso: ");
                   for(i = 0; i < qtdPares; i++){
                     printf("%d, ", listaPares[i]);
                }
               break;
            case 5:
              exit(-1);
               break;
            default:
               break;
        }
    }
}

int main(){
    
    menu();
    
    return 0;
}
