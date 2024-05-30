#include <stdio.h>
#include <string.h>
#include <corecrt_search.h>

#define MAX_CHARS 100
#define NUM_PESSOAS 5

typedef struct {
    char nome[MAX_CHARS];
    char endereco[MAX_CHARS];
    char telefone[MAX_CHARS];
} Pessoa;

int compararNomes(const void *a, const void *b) {
    return strcmp(((Pessoa*)a)->nome, ((Pessoa*)b)->nome);
}

int main() {
    Pessoa pessoas[NUM_PESSOAS];

    printf("Digite os dados das pessoas:\n");
    for (int i = 0; i < NUM_PESSOAS; i++) {
        printf("Pessoa %d\n", i + 1);
        printf("Nome: ");
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        printf("Endereço: ");
        fgets(pessoas[i].endereco, sizeof(pessoas[i].endereco), stdin);
        printf("Telefone: ");
        fgets(pessoas[i].telefone, sizeof(pessoas[i].telefone), stdin);
        printf("\n");
    }

    qsort(pessoas, NUM_PESSOAS, sizeof(Pessoa), compararNomes);

    printf("Pessoas em ordem alfabética:\n");
    for (int i = 0; i < NUM_PESSOAS; i++) {
        printf("Nome: %s", pessoas[i].nome);
        printf("Endereço: %s", pessoas[i].endereco);
        printf("Telefone: %s", pessoas[i].telefone);
        printf("\n");
    }

    return 0;
}