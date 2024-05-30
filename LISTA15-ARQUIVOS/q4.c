#include <stdio.h>

int contar_ocorrencias(const char *nome_arquivo, char caractere_procurado) {
    FILE *arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", nome_arquivo);
        return -1;
    }

    int ocorrencias = 0;
    char caractere;
    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == caractere_procurado) {
            ocorrencias++;
        }
    }

    fclose(arquivo);
    return ocorrencias;
}

int main() {
    char nome_arquivo[100];
    char caractere_procurado;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome_arquivo);

    printf("Digite o caractere a ser procurado: ");
    scanf(" %c", &caractere_procurado);

    int num_ocorrencias = contar_ocorrencias(nome_arquivo, caractere_procurado);
    if (num_ocorrencias >= 0) {
        printf("O caractere '%c' ocorre %d vez(es) no arquivo %s.\n", caractere_procurado, num_ocorrencias, nome_arquivo);
    }

    return 0;
}
