#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "produtos.txt"

struct Produto {
    int id;
    char nome[50];
    float preco;
    int quantidade;
};

void adicionarProduto();
void listarProdutos();
void buscarProduto();
void atualizarProduto();
void removerProduto();
void menu();

int main() {
    menu();
    return 0;
}

void adicionarProduto() {
    struct Produto produto;
    char escolha;
    FILE *file;

    printf("Digite o ID do produto: ");
    scanf("%d", &produto.id);
    printf("Digite o nome do produto: ");
    scanf("%s", produto.nome);
    printf("Digite o preço do produto: ");
    scanf("%f", &produto.preco);
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &produto.quantidade);

    printf("Deseja adicionar o registro no início (I) ou no final (F) do arquivo? ");
    scanf(" %c", &escolha);

    if (escolha == 'I' || escolha == 'i') {
        file = fopen(FILE_NAME, "r+");
        if (file == NULL) {
            file = fopen(FILE_NAME, "w");
        }
        fseek(file, 0, SEEK_END);
        long tamanho = ftell(file);
        char *buffer = (char*)malloc(tamanho);
        rewind(file);
        fread(buffer, 1, tamanho, file);
        rewind(file);
        fwrite(&produto, sizeof(struct Produto), 1, file);
        fwrite(buffer, 1, tamanho, file);
        free(buffer);
    } else {
        file = fopen(FILE_NAME, "a");
        if (file == NULL) {
            file = fopen(FILE_NAME, "w");
        }
        fwrite(&produto, sizeof(struct Produto), 1, file);
    }
    fclose(file);

    printf("Produto adicionado com sucesso!\n");
}

void listarProdutos() {
    struct Produto produto;
    FILE *file = fopen(FILE_NAME, "r");
    if (!file) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int opcao;
    int count = 0;
    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    int totalProdutos = fileSize / sizeof(struct Produto);
    rewind(file);

    printf("Escolha o tipo de visualização:\n");
    printf("1. Os 5 primeiros registros\n");
    printf("2. Os 5 últimos registros\n");
    printf("3. Todos os registros\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        while (fread(&produto, sizeof(struct Produto), 1, file) && count < 5) {
            printf("ID: %d, Nome: %s, Preço: %.2f, Quantidade: %d\n", produto.id, produto.nome, produto.preco, produto.quantidade);
            count++;
        }
    } else if (opcao == 2) {
        fseek(file, -5 * sizeof(struct Produto), SEEK_END);
        while (fread(&produto, sizeof(struct Produto), 1, file)) {
            printf("ID: %d, Nome: %s, Preço: %.2f, Quantidade: %d\n", produto.id, produto.nome, produto.preco, produto.quantidade);
        }
    } else if (opcao == 3) {
        while (fread(&produto, sizeof(struct Produto), 1, file)) {
            printf("ID: %d, Nome: %s, Preço: %.2f, Quantidade: %d\n", produto.id, produto.nome, produto.preco, produto.quantidade);
        }
    } else {
        printf("Opção inválida.\n");
    }

    fclose(file);
}

void buscarProduto() {
    struct Produto produto;
    int id;
    int encontrado = 0;
    FILE *file = fopen(FILE_NAME, "r");
    if (!file) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("Digite o ID do produto que deseja buscar: ");
    scanf("%d", &id);

    while (fread(&produto, sizeof(struct Produto), 1, file)) {
        if (produto.id == id) {
            printf("Produto encontrado: ID: %d, Nome: %s, Preço: %.2f, Quantidade: %d\n", produto.id, produto.nome, produto.preco, produto.quantidade);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Produto com ID %d não encontrado.\n", id);
    }

    fclose(file);
}

void atualizarProduto() {
    struct Produto produto;
    int id;
    int encontrado = 0;
    FILE *file = fopen(FILE_NAME, "r+");
    if (!file) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("Digite o ID do produto que deseja atualizar: ");
    scanf("%d", &id);

    while (fread(&produto, sizeof(struct Produto), 1, file)) {
        if (produto.id == id) {
            printf("Produto encontrado: ID: %d, Nome: %s, Preço: %.2f, Quantidade: %d\n", produto.id, produto.nome, produto.preco, produto.quantidade);
            printf("Digite o novo nome do produto: ");
            scanf("%s", produto.nome);
            printf("Digite o novo preço do produto: ");
            scanf("%f", &produto.preco);
            printf("Digite a nova quantidade em estoque: ");
            scanf("%d", &produto.quantidade);
            fseek(file, -sizeof(struct Produto), SEEK_CUR);
            fwrite(&produto, sizeof(struct Produto), 1, file);
            printf("Produto atualizado com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Produto com ID %d não encontrado.\n", id);
    }

    fclose(file);
}

void removerProduto() {
    struct Produto produto;
    int id;
    int encontrado = 0;
    FILE *file = fopen(FILE_NAME, "r");
    FILE *tempFile = fopen("temp.txt", "w");
    if (!file || !tempFile) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("Digite o ID do produto que deseja remover: ");
    scanf("%d", &id);

    while (fread(&produto, sizeof(struct Produto), 1, file)) {
        if (produto.id != id) {
            fwrite(&produto, sizeof(struct Produto), 1, tempFile);
        } else {
            encontrado = 1;
        }
    }

    fclose(file);
    fclose(tempFile);

    remove(FILE_NAME);
    rename("temp.txt", FILE_NAME);

    if (encontrado) {
        printf("Produto removido com sucesso!\n");
    } else {
        printf("Produto com ID %d não encontrado.\n", id);
    }
}

void menu() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar produto\n");
        printf("2. Listar produtos\n");
        printf("3. Buscar produto\n");
        printf("4. Atualizar produto\n");
        printf("5. Remover produto\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                adicionarProduto();
                break;
            case 2:
                listarProdutos();
                break;
            case 3:
                buscarProduto();
                break;
            case 4:
                atualizarProduto();
                break;
            case 5:
                removerProduto();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while(opcao != 0);
}

