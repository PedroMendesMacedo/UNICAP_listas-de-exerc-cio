#include <stdio.h>
#include <string.h>

#define MAX_DIRETORES 5
#define MAX_NOME 21 
#define MAX_FILMES 3
#define MAX_NOME_FILME 51 

typedef struct {
    char nome[MAX_NOME_FILME];
    int ano;
    int duracao;
} Filme;

typedef struct {
    char nome[MAX_NOME];
    int quantidade_filmes;
    Filme filmes[MAX_FILMES];
} Diretor;

void buscarDiretor(Diretor diretores[], int num_diretores, char nome_busca[]) {
    int encontrou = 0;
    for (int i = 0; i < num_diretores; i++) {
        if (strcmp(diretores[i].nome, nome_busca) == 0) {
            encontrou = 1;
            printf("Filmes dirigidos por '%s':\n", diretores[i].nome);
            for (int j = 0; j < diretores[i].quantidade_filmes; j++) {
                printf("- Nome: %s, Ano: %d, Duração: %d minutos\n", diretores[i].filmes[j].nome, diretores[i].filmes[j].ano, diretores[i].filmes[j].duracao);
            }
            printf("\n");
            break;
        }
    }
    if (!encontrou) {
        printf("Diretor '%s' não encontrado.\n\n", nome_busca);
    }
}

int main() {
    Diretor diretores[MAX_DIRETORES];
    char nome_diretor[MAX_NOME];

    printf("Digite os dados dos diretores:\n");
    for (int i = 0; i < MAX_DIRETORES; i++) {
        printf("Diretor %d\n", i + 1);
        printf("Nome (máximo de 20 letras): ");
        scanf("%s", diretores[i].nome);
        printf("Quantidade de filmes: ");
        scanf("%d", &diretores[i].quantidade_filmes);
        printf("Digite os dados dos filmes:\n");
        for (int j = 0; j < diretores[i].quantidade_filmes; j++) {
            printf("Filme %d\n", j + 1);
            printf("Nome (máximo de 50 letras): ");
            scanf("%s", diretores[i].filmes[j].nome);
            printf("Ano: ");
            scanf("%d", &diretores[i].filmes[j].ano);
            printf("Duração (em minutos): ");
            scanf("%d", &diretores[i].filmes[j].duracao);
        }
        printf("\n");
    }

    printf("Digite o nome do diretor que deseja buscar (digite '0' para sair): ");
    scanf("%s", nome_diretor);

    while (strcmp(nome_diretor, "0") != 0) {
        buscarDiretor(diretores, MAX_DIRETORES, nome_diretor);
        printf("Digite o nome do diretor que deseja buscar (digite '0' para sair): ");
        scanf("%s", nome_diretor);
    }

    return 0;
}
