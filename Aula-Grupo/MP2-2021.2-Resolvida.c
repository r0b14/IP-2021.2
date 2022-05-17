#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[30];
    int ataque; 
    int defesa;
} Pokemon;

typedef struct{
    char nome[30];
    Pokemon *pokebola;
    int nPokemons;
    int pontuacao;
} Treinador;

Treinador *addTreinador(Treinador *treinadores, int *qtdCompetidores){
    /**
    * 1. ler para uma memoria aux
    * 2. Alocar a Memoria
    * 3. Passar da Memoria aux para a memoria alocada
    **/
    Treinador aux; // Memoria auxiliar 
    Treinador *ptr = treinadores; // ptr herda tudo de treinadores

    aux.nPokemons = 0;
    aux.pontuacao = 0;

    printf("Nome Treinador: ");
    scanf(" %29[^\n]", aux.nome);

    // Como ptr herdou tudo que tem em treinador, vamos mexer só em ptr
    ptr = (Treinador *)  realloc(ptr, ((*qtdCompetidores) + 1) * sizeof(Treinador));
    if ( ptr == NULL) {
        printf("Erro de Alocação!\n");
        free(treinadores);
        exit(-1);
    }
    
    // Treinadores recebe de volta o valor que foi alocado por ptr 
    // Regatando a referencia
    // Treinador vai ter tudo o que tinha na main mais uma posicação alocada no final
    treinadores = ptr;

    treinadores[(*qtdCompetidores)] = aux; // Repassando o valor de aux para treinadores na posicão qtdCompetidores
    (*qtdCompetidores)++;

    return treinadores;
}

// Adicionar o pokemons ao competidor
Treinador *addPokemon(Treinador *treinadores, char *nomeTreinador, Pokemon pokemon, int qtdCompetidores){
    int i, flag = 0; // Contador
    Treinador *ptr = treinadores; // ptr recebe as propriedades de treinadores

    // Verificando qual nome inserido pelo usuario
    for (i = 0; (i < qtdCompetidores) && (flag == 0); i++)
    {   
        // Verificando qual o nome inserido pelo usuario e comparando
        if ( strcmp(nomeTreinador, ptr[i].nome) == 0 ) // Se achou o carinha
        {
            // se ele tem pokemons
            if(ptr[i].nPokemons == 0){ // Caso não tenha
                ptr[i].pokebola = (Pokemon *) malloc ((ptr[i].nPokemons + 1) * sizeof(Pokemon));
                if (ptr[i].pokebola == NULL) {
                    printf("Error de alocação.\n");
                    exit(-1);
                }
            } else { // Caso ele já tenha 
                ptr[i].pokebola = (Pokemon *) realloc (ptr[i].pokebola, (ptr[i].nPokemons + 1) * sizeof(Pokemon));
                if (ptr[i].pokebola == NULL) {
                    printf("Error de alocação.\n");
                    exit(-1);
                }
            }
        }
        // pokebola foi alocada agora
        ptr[i].pokebola[ptr[i].nPokemons] = pokemon;

        ptr[i].nPokemons++;

        // ajuda na parada do for
        flag = 1;
    }

    return ptr;
}

// Remover competidor que perdeu
Treinador *removeTreinador(Treinador *treinadores, int *qtdCompetidores, int indexTreinador) {
    Treinador *ptr = treinadores;
    int i, flag = 0;

    for (i = 0; (i < (*qtdCompetidores)) && (flag == 0); i++) {
        if(i == indexTreinador) {
            // Removendo competidor
            ptr[i] = ptr[(*qtdCompetidores) -  1];
            // Realocando
            ptr= (Treinador *) realloc (ptr, ((*qtdCompetidores) + 1) * sizeof(Treinador));
            if (ptr == NULL) {
                printf("Error de alocação.\n");
                exit(-1);
            }
        }
        flag = 1;
    }
    
    return ptr;
}

char *batalha(Treinador **treinadores, char *nomeCompetidor1, char *nomeCompetidor2, int indexPokemon1, int indexPokemon2, int *qtdCompetidores) {
    char *vencedor = NULL;
    int i, j;
    Pokemon poke1, poke2;
    int index1, index2;

    for (i = 0; i< (*qtdCompetidores); i++) {
        if (strcmp(nomeCompetidor1, (*treinadores)[i].nome) == 0) { // Encontrou o competidor1
            index1 = i; // gravando a posicao do competidor1
            for (j = 0; j < (*treinadores)[i].nPokemons; j++) { // Percorrendo os pokemons que o competidor tem
                if (j == indexPokemon1){
                    poke1 = (*treinadores)[i].pokebola[j]; // transferindo
                }
            }
            //poke1 = (*treinadores)[i].pokebola[indexPokemon1];
        }
        else if ((strcmp(nomeCompetidor1, (*treinadores)[i].nome) == 0)) { // Encontrou o competidor2
            index1 = i; // gravando a posicao do competidor2
            for (j = 0; j < (*treinadores)[i].nPokemons; j++) { // Percorrendo os pokemons que o competidor tem
                if (j == indexPokemon2){
                    poke2 = (*treinadores)[i].pokebola[j]; // transferindo
                }
            }
        }
        //poke1 = (*treinadores)[i].pokebola[indexPokemon1];
    }

    if (( poke1.ataque - poke2.ataque ) > ( poke2.ataque - poke1.defesa )) {
        vencedor = nomeCompetidor1;
        (*treinadores)[index1].pontuacao++;
        (*treinadores)[index2].pontuacao--;

        if((*treinadores)[index2].pontuacao == -5) {
            (*treinadores) = removeTreinador((*treinadores), qtdCompetidores, index2);
        }
    } else {
        vencedor = nomeCompetidor2;
        (*treinadores)[index1].pontuacao--;
        (*treinadores)[index2].pontuacao++;
        if((*treinadores)[index1].pontuacao == -5) {
            (*treinadores) = removeTreinador((*treinadores), qtdCompetidores, index1);
        }
    }
    
    return vencedor;
}

void menu() {
    printf("\n--- Festival de Batalha em Pewter City ---\n\n");
    printf("1 - Adicionar Competidor\n");
    printf("2 - Adicionar Pokemon\n");
    printf("3 - Batalhar\n");
    printf("4 - Sair do Programa\n");
    printf("Opcao: ");
}

int main() {
    Treinador *listaCompetidor = NULL;
    Pokemon pokemons;
    int qtdCompetidores = 0, i = 0; // Contadores
    char treinador[30], competidor1[30], competidor2[30];
    char *vencedor = NULL;
    int poke1, poke2;
    int opcao;

    do {
        menu();
        scanf("%d", &opcao);
        switch (opcao)
        {
            // Adicionar Competidor
            case 1:
                listaCompetidor = addTreinador(listaCompetidor, &qtdCompetidores);

                printf("Lista atualizada!\n");
                for (i = 0; i < qtdCompetidores; i++) {
                    printf("Nome: %s\n", listaCompetidor[i].nome);
                    printf("Pontucao: %d\n", listaCompetidor[i].pontuacao);
                    printf("N Pokemons: %d\n", listaCompetidor[i].nPokemons);
                    // Verificando pokemons
                    if(listaCompetidor[i].nPokemons > 0) {
                        printf("Pokemons de %s\n", listaCompetidor[i].nome);
                        // Printando Pokemon e suas propriedades
                        for (int j = 0; j < listaCompetidor[i].nPokemons; i++)
                        {
                            printf("Pokemon: %s\n", listaCompetidor[i].pokebola[j].nome);
                            printf("Ataque: %d\n", listaCompetidor[i].pokebola[j].ataque);
                            printf("Defesa: %d\n", listaCompetidor[i].pokebola[j].defesa);
                        }
                    }
                }
            break;
            // Adicionar Pokemon
            case 2:
                // Preenchendo pokemon
                printf("Quem Capturou: ");
                scanf(" %29[^\n]", treinador);
                printf("Dados no novo Pokemon\n");
                printf("Nome: ");
                scanf(" %29[^\n]", pokemons.nome);
                printf("Ataque: ");
                scanf("%d", &pokemons.nome);
                printf("Defesa: ");
                scanf("%d", &pokemons.nome);
                
                listaCompetidor = addPokemon(listaCompetidor, treinador, pokemons, qtdCompetidores);
            break;
            // Batalhar
            case 3:
                printf("\t--- Batalha ---\n");
                printf("Dados batalha\n");
                
                printf("1 Competidor: ");
                scanf(" %29[^\n]", competidor1);
                printf("Indice do pokemon de %s que vai batalhar: ", competidor1);
                scanf("%d", &poke1);

                printf("2 Competidor: ");
                scanf(" %29[^\n]", competidor2);
                printf("Indice do pokemon de %s que vai batalhar: ", competidor2);
                scanf("%d", &poke2);

                vencedor = batalha(&listaCompetidor, &competidor1, &competidor2, poke1, poke2, &qtdCompetidores);
                
                printf("\n\n Vencedor: %s\n\n", vencedor);
            break;
            // Sair do Programa
            case 4:
            exit(1);
            break;
        
            default:
                printf("Error! :( \n");
                exit(1);
            break;
        }

    } while (opcao != 4);

    for(i = 0; i < qtdCompetidores; i++) {
        free(listaCompetidor[i].pokebola);
    }
    free(vencedor);
    free(listaCompetidor);
    return 0;
}