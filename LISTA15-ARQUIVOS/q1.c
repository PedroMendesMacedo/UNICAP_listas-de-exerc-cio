#include <stdio.h>

void escrever_no_arquivo() {
    FILE *arquivo = fopen("arq.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    char caractere;
    printf("Digite caracteres para gravar no arquivo (ou '0' para terminar):\n");
    while (1) {
        scanf(" %c", &caractere);
        if (caractere == '0') {
            break;
        }
        fputc(caractere, arquivo);
    }

    fclose(arquivo);
}

void ler_arquivo() {
    FILE *arquivo = fopen("arq.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return;
    }

    char caractere;
    printf("Conteúdo do arquivo:\n");
    while ((caractere = fgetc(arquivo)) != EOF) {
        putchar(caractere);
    }
    putchar('\n');

    fclose(arquivo);
}

int main() {
    escrever_no_arquivo();
    ler_arquivo();
    return 0;
}
