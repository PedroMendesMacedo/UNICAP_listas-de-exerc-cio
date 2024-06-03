#include <stdio.h>
#include <string.h>

// Definição da estrutura Produto
struct Produto {
    int id;              // Identificador único do produto
    char nome[50];       // Nome do produto
    float preco;         // Preço do produto
    int quantidade;      // Quantidade em estoque
};

int main() {
    // Declaração e inicialização de um produto
    struct Produto produto1;

    // Atribuição de valores ao produto1
    produto1.id = 1;
    strcpy(produto1.nome, "Notebook");
    produto1.preco = 2500.50;
    produto1.quantidade = 10;

    // Impressão das informações do produto1
    printf("ID: %d\n", produto1.id);
    printf("Nome: %s\n", produto1.nome);
    printf("Preço: R$ %.2f\n", produto1.preco);
    printf("Quantidade em estoque: %d\n", produto1.quantidade);

    return 0;
}
