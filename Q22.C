#include <stdio.h>

int main() {
    char nome[50];
    int idade;

    printf("Digite o nome: ");
    scanf("%s", nome);

    while (1) {
        printf("Digite a idade: ");

        if (scanf("%d", &idade) == 1) {
            break; 
        } else {
            printf("Erro: A idade deve ser um valor inteiro válido.\n");

            while (getchar() != '\n');
        }
    }

    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);

    return 0;
}
