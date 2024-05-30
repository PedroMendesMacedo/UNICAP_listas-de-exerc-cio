#include <stdio.h>
#include <string.h>

void cadastrar_contatos(const char *nome_arquivo) {
    FILE *arquivo = fopen(nome_arquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s.\n", nome_arquivo);
        return;
    }

    char nome[100];
    char telefone[20];

    while (1) {
        printf("Digite o nome: ");
        scanf(" %[^\n]", nome);  

        printf("Digite o telefone (ou '0' para terminar): ");
        scanf("%s", telefone);

        if (strcmp(telefone, "0") == 0) {
            break;
        }

        fprintf(arquivo, "Nome: %s, Telefone: %s\n", nome, telefone);
    }

    fclose(arquivo);
    printf("Cadastro concluído e salvo no arquivo %s.\n", nome_arquivo);
}

int main() {
    char nome_arquivo[100];

    printf("Digite o nome do arquivo para salvar os contatos: ");
    scanf("%s", nome_arquivo);

    cadastrar_contatos(nome_arquivo);

    return 0;
}
