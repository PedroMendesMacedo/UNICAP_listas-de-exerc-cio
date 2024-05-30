#include <stdio.h>

float calcular_total(const char *nome_arquivo) {
    FILE *arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", nome_arquivo);
        return -1;
    }

    char nome_produto[100];
    float preco, total = 0.0;

    while (fscanf(arquivo, "%s %f", nome_produto, &preco) == 2) {
        total += preco;
    }

    fclose(arquivo);
    return total;
}

int main() {
    char nome_arquivo[100];

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome_arquivo);

    float total_compra = calcular_total(nome_arquivo);
    if (total_compra >= 0) {
        printf("O total da compra é: R$ %.2f\n", total_compra);
    }

    return 0;
}
