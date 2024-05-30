#include <stdio.h>

int contar_linhas(const char *nome_arquivo) {
    FILE *arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", nome_arquivo);
        return -1;
    }

    int linhas = 0;
    char caractere;
    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == '\n') {
            linhas++;
        }
    }

    fclose(arquivo);

    if (caractere != '\n') {
        linhas++;
    }

    return linhas;
}

int main() {
    char nome_arquivo[100];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nome_arquivo);

    int num_linhas = contar_linhas(nome_arquivo);
    if (num_linhas >= 0) {
        printf("O arquivo %s possui %d linha(s).\n", nome_arquivo, num_linhas);
    }

    return 0;
}
