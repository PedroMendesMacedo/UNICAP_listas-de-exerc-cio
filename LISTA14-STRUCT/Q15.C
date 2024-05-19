#include <stdio.h>
#include <string.h>

#define MAX_RECEITAS 5
#define MAX_NOME_RECEITA 26 
#define MAX_INGREDIENTES 10
#define MAX_NOME_INGREDIENTE 21 

typedef struct {
    char nome[MAX_NOME_INGREDIENTE];
    int quantidade;
} Ingrediente;

typedef struct {
    char nome[MAX_NOME_RECEITA];
    int num_ingredientes;
    Ingrediente ingredientes[MAX_INGREDIENTES];
} Receita;

void buscarReceita(Receita receitas[], int num_receitas, char nome_busca[]) {
    int encontrou = 0;
    for (int i = 0; i < num_receitas; i++) {
        if (strcmp(receitas[i].nome, nome_busca) == 0) {
            encontrou = 1;
            printf("Ingredientes da Receita '%s':\n", receitas[i].nome);
            for (int j = 0; j < receitas[i].num_ingredientes; j++) {
                printf("- %s: %d\n", receitas[i].ingredientes[j].nome, receitas[i].ingredientes[j].quantidade);
            }
            printf("\n");
            break;
        }
    }
    if (!encontrou) {
        printf("Receita '%s' não encontrada.\n\n", nome_busca);
    }
}

int main() {
    Receita receitas[MAX_RECEITAS];
    char nome_receita[MAX_NOME_RECEITA];
    int num_ingredientes;

    printf("Digite os dados das receitas:\n");
    for (int i = 0; i < MAX_RECEITAS; i++) {
        printf("Receita %d\n", i + 1);
        printf("Nome (máximo de 25 letras): ");
        scanf("%s", receitas[i].nome);
        printf("Quantidade de ingredientes: ");
        scanf("%d", &receitas[i].num_ingredientes);
        printf("Digite os dados dos ingredientes:\n");
        for (int j = 0; j < receitas[i].num_ingredientes; j++) {
            printf("Ingrediente %d\n", j + 1);
            printf("Nome (máximo de 20 letras): ");
            scanf("%s", receitas[i].ingredientes[j].nome);
            printf("Quantidade: ");
            scanf("%d", &receitas[i].ingredientes[j].quantidade);
        }
        printf("\n");
    }

    printf("Digite o nome da receita que deseja buscar (digite '0' para sair): ");
    scanf("%s", nome_receita);

    while (strcmp(nome_receita, "0") != 0) {
        buscarReceita(receitas, MAX_RECEITAS, nome_receita);
        printf("Digite o nome da receita que deseja buscar (digite '0' para sair): ");
        scanf("%s", nome_receita);
    }

    return 0;
}
