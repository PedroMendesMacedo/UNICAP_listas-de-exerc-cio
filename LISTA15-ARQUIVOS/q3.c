#include <stdio.h>
#include <ctype.h>

int contar_vogais(const char *nome_arquivo) {
    FILE *arquivo = fopen(nome_arquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", nome_arquivo);
        return -1;
    }

    int vogais = 0;
    char caractere;
    while ((caractere = fgetc(arquivo)) != EOF) {
        caractere = tolower(caractere); 
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            vogais++;
        }
    }

    fclose(arquivo);
    return vogais;
}

int main() {
    char nome_arquivo[100];
    printf("Digite o nome do arquivo: ");
    scanf("%s", nome_arquivo);

    int num_vogais = contar_vogais(nome_arquivo);
    if (num_vogais >= 0) {
        printf("O arquivo %s possui %d vogal(is).\n", nome_arquivo, num_vogais);
    }

    return 0;
}
