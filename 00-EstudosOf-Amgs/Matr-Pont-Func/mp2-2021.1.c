#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[30];
  int idade;
  float capiInici, capiFinal;
  int tentativas;
} Cadastro;

void print_player(Cadastro *player, int qtd) {

  for (int i = 0; i < qtd; i++) {
    printf("Informações do %dª jogador:\n", (i + 1));
    printf(" Nome :%s\n", player[i].nome);
    printf(" Idade: %d\n", player[i].idade);
    printf(" CapiFinal: %.2f\n", player[i].capiFinal);
    printf(" Tentativas: %d\n", player[i].tentativas);
  }
}

void play_game(int **matriz, Cadastro *player, int *qtdEggs, int qtd) {
  // condicoes: ler até ter ovos, ler até acabar as tentativas
  // ler as coordenadas a cada tentativa
  // aumentar em 10 reais o capital caso acertar, e diminuir em 1 no capital se
  // errar
  int coord1, coord2;
  for (int i = 0; i < qtd;) {
    while (player[i].tentativas) {
      scanf("%d %d", &coord1, &coord2);
      if (matriz[coord1][coord2] == 1) {
        player[i].capiFinal += 10;
        player[i].tentativas--;
        matriz[coord1][coord2] = 0;
        (*qtdEggs)--;
      } else {
        player[i].capiFinal--;
      }
    }
    i++;
  }
}

Cadastro *Chama_cadastro(Cadastro *player, int qtd) {

  player = (Cadastro *)malloc(qtd * sizeof(Cadastro));
  if (player == NULL) {
    printf("Erro de Alocação\n");
    free(player);
    exit(1);
  }
  for (int i = 0; i < qtd; i++) {
    printf("Informações do %dª jogador:\n", (i + 1));
    printf("Nome: ");
    scanf(" %29[^\n]", player[i].nome);
    printf("Idade:");
    scanf("%d", &player[i].idade);
    printf("Capital:");
    scanf("%f", &player[i].capiInici);
    player[i].capiFinal = player[i].capiInici;
    printf("Tentativas: ");
    scanf("%d", &player[i].tentativas);
  }

  return player;
}

void preenche_Matriz(int **matriz, int linhas, int colunas, int *qtdEggs) {

  // int tam= sizeof(matriz);
  // printf("Na func: %d", tam);
  int i, j;
  printf("l: %d c: %d\n", linhas, colunas);

  for (i = 0; i < linhas; i++) {
    for (j = 0; j < colunas; j++) {
      printf("%3d ", matriz[i][j]);
    }
    printf("\n");
  }
  for (i = 0; i < linhas; i++) {
    for (j = 0; j < colunas; j++) {
      if (i==j) {
        matriz[i][j] = 1;
        *(qtdEggs) += 1;
        // printf("ola!");
      } else
        matriz[i][j] = 0;
    }
  }
  for (i = 0; i < linhas; i++) {
    for (j = 0; j < colunas; j++) {
      printf("%3d ", matriz[i][j]);
    }
    printf("\n");
  }
}

int **Aloca_matriz(int **matriz, int linhas, int colunas)
{
  // Alocar primeiramente a matriz inteira
  // printf("aqui");
  matriz = (int **)malloc(sizeof(int *) * linhas);
  if (matriz == NULL)
  {
    printf("Erro de Alocação\n");
    free(matriz);
    exit(1);
  }
  for (int i = 0; i < linhas; i++)
  {
    matriz[i] = (int *)malloc(sizeof(int) * colunas);
    if (matriz[i] == NULL)
    {
      printf("Erro de Alocação\n");
      free(matriz[i]);
      exit(1);
    }
  }
  return matriz;
}

int main() {

  Cadastro *player;
  int linhas, colunas;
  int qtdEggs = 0, qtd;
  int **matriz;

  scanf("%d %d", &linhas, &colunas);
  matriz=Aloca_matriz(matriz, linhas, colunas);
  if (matriz == NULL)
  {
    printf("eh null");
  }
  // long long int tam= sizeof(matriz);
  // printf("Na main: %lld",tam);

  printf("Quantos jogadores?\n");
  scanf("%d", &qtd);
  player = Chama_cadastro(player, qtd);

  preenche_Matriz(matriz, linhas, colunas, &qtdEggs);
  play_game(matriz, player, &qtdEggs, qtd);
  print_player(player, qtd);

  return 0;
}
