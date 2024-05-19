#include <stdio.h>
#include <string.h>

#define MAX_CONTATOS 100
#define MAX_NOME 50
#define MAX_EMAIL 50
#define MAX_OBSERVACOES 100
#define MAX_TELEFONE 15

typedef struct {
    char nome[MAX_NOME];
    char email[MAX_EMAIL];
    char telefone[MAX_TELEFONE];
    char observacoes[MAX_OBSERVACOES];
} Contato;

Contato agenda[MAX_CONTATOS];
int num_contatos = 0;

void imprimirContato(Contato contato) {
    printf("Nome: %s\n", contato.nome);
    printf("Email: %s\n", contato.email);
    printf("Telefone: %s\n", contato.telefone);
    printf("Observações: %s\n\n", contato.observacoes);
}

void buscarPorNome(char nome[]) {
    int encontrados = 0;
    for (int i = 0; i < num_contatos; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            imprimirContato(agenda[i]);
            encontrados = 1;
        }
    }
    if (!encontrados) {
        printf("Nenhum contato encontrado com o nome '%s'.\n\n", nome);
    }
}

void inserirContato(Contato novo_contato) {
    if (num_contatos < MAX_CONTATOS) {
        agenda[num_contatos] = novo_contato;
        num_contatos++;
        printf("Contato adicionado com sucesso.\n\n");
    } else {
        printf("A agenda está cheia. Não é possível adicionar mais contatos.\n\n");
    }
}

void removerContato(char nome[]) {
    int i, encontrou = 0;
    for (i = 0; i < num_contatos; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            encontrou = 1;
            for (int j = i; j < num_contatos - 1; j++) {
                agenda[j] = agenda[j + 1];
            }
            num_contatos--;
            printf("Contato removido com sucesso.\n\n");
            break;
        }
    }
    if (!encontrou) {
        printf("Nenhum contato encontrado com o nome '%s'. Nenhum contato foi removido.\n\n", nome);
    }
}

int main() {
    Contato novo_contato;
    char nome_busca[MAX_NOME];

    int opcao;
    do {
        printf("Menu Principal:\n");
        printf("1. Inserir Contato\n");
        printf("2. Remover Contato\n");
        printf("3. Buscar Contato por Nome\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o nome do contato: ");
                scanf("%s", novo_contato.nome);
                inserirContato(novo_contato);
                break;
            case 2:
                printf("Digite o nome do contato a ser removido: ");
                scanf("%s", nome_busca);
                removerContato(nome_busca);
                break;
            case 3:
                printf("Digite o nome do contato a ser buscado: ");
                scanf("%s", nome_busca);
                buscarPorNome(nome_busca);
                break;
            case 4:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
