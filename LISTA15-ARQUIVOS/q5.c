#include <stdio.h>
#include <ctype.h>

void converter_para_maiusculas(const char *arquivo_entrada, const char *arquivo_saida) {
    FILE *entrada = fopen(arquivo_entrada, "r");
    if (entrada == NULL) {
        printf("Erro ao abrir o arquivo de entrada %s.\n", arquivo_entrada);
        return;
    }

    FILE *saida = fopen(arquivo_saida, "w");
    if (saida == NULL) {
        printf("Erro ao abrir o arquivo de saída %s.\n", arquivo_saida);
        fclose(entrada);
        return;
    }

    char caractere;
    while ((caractere = fgetc(entrada)) != EOF) {
        fputc(toupper(caractere), saida);
    }

    fclose(entrada);
    fclose(saida);
}

int main() {
    char nome_arquivo_entrada[100];
    char nome_arquivo_saida[100];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nome_arquivo_entrada);

    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nome_arquivo_saida);

    converter_para_maiusculas(nome_arquivo_entrada, nome_arquivo_saida);

    printf("Conversão concluída. O conteúdo do arquivo %s foi copiado para o arquivo %s com todas as letras convertidas para maiúsculas.\n", nome_arquivo_entrada, nome_arquivo_saida);

    return 0;
}
