#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 5
#define MAX_NOME 16 

typedef struct {
    int codigo;
    char nome[MAX_NOME];
    float preco;
    int quantidade;
} Produto;

void atualizarEstoque(Produto produtos[], int codigo, int quantidade) {
    for (int i = 0; i < MAX_PRODUTOS; i++) {
        if (produtos[i].codigo == codigo) {
            produtos[i].quantidade -= quantidade;
            break;
        }
    }
}

Produto *buscarProduto(Produto produtos[], int codigo) {
    for (int i = 0; i < MAX_PRODUTOS; i++) {
        if (produtos[i].codigo == codigo) {
            return &produtos[i];
        }
    }
    return NULL;
}

int main() {
    Produto produtos[MAX_PRODUTOS];
    int codigo_pedido, quantidade_pedido;

    printf("Digite os dados dos produtos:\n");
    for (int i = 0; i < MAX_PRODUTOS; i++) {
        printf("Produto %d\n", i + 1);
        printf("Código: ");
        scanf("%d", &produtos[i].codigo);
        printf("Nome (máximo de 15 letras): ");
        scanf("%s", produtos[i].nome);
        printf("Preço: ");
        scanf("%f", &produtos[i].preco);
        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
        printf("\n");
    }

    printf("Digite o código do produto do pedido (digite 0 para sair): ");
    scanf("%d", &codigo_pedido);

    while (codigo_pedido != 0) {
        printf("Digite a quantidade do produto do pedido: ");
        scanf("%d", &quantidade_pedido);

        Produto *produto = buscarProduto(produtos, codigo_pedido);
        if (produto != NULL && produto->quantidade >= quantidade_pedido) {
            atualizarEstoque(produtos, codigo_pedido, quantidade_pedido);
            printf("Pedido atendido com sucesso!\n");
        } else if (produto == NULL) {
            printf("Erro: Produto não encontrado.\n");
        } else {
            printf("Erro: Quantidade insuficiente em estoque.\n");
        }

        printf("\nDigite o código do produto do pedido (digite 0 para sair): ");
        scanf("%d", &codigo_pedido);
    }

    return 0;
}
