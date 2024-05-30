#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int contar_ocorrencias_palavra(const char *nome_arquivo, const char *palavra_procurada) {
    FILE *arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", nome_arquivo);
        return -1;
    }

    int ocorrencias = 0;
    char buffer[1024];

    char palavra_lower[100];
    for (int i = 0; palavra_procurada[i]; i++) {
        palavra_lower[i] = tolower(palavra_procurada[i]);
    }
    palavra_lower[strlen(palavra_procurada)] = '\0';

    while (fscanf(arquivo, "%1023s", buffer) == 1) {
        for (int i = 0; buffer[i]; i++) {
            buffer[i] = tolower(buffer[i]);
        }

        if (strcmp(buffer, palavra_lower) == 0) {
            ocorrencias++;
        }
    }

    fclose(arquivo);
    return ocorrencias;
}

int main() {
    char nome_arquivo[100];
    char palavra_procurada[100];

    printf("Digite o nome do arquivo: ");
    scanf("%s", nome_arquivo);

    printf("Digite a palavra a ser procurada: ");
    scanf("%s", palavra_procurada);

    int num_ocorrencias = contar_ocorrencias_palavra(nome_arquivo, palavra_procurada);
    if (num_ocorrencias >= 0) {
        printf("A palavra '%s' ocorre %d vez(es) no arquivo %s.\n", palavra_procurada, num_ocorrencias, nome_arquivo);
    }

    return 0;
}
