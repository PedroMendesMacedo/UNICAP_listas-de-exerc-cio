#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], nomeMaisNovo[50], nomeMaisVelho[50];
    int idade, idadeMaisNova = 999, idadeMaisVelha = 0;

    while (1) {
        printf("Digite a idade (ou um número negativo para sair): ");
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        printf("Digite o primeiro nome: ");
        scanf("%s", nome);

        if (idade < idadeMaisNova) {
            idadeMaisNova = idade;
            strcpy(nomeMaisNovo, nome);
        }

        if (idade > idadeMaisVelha) {
            idadeMaisVelha = idade;
            strcpy(nomeMaisVelho, nome);
        }
    }

    printf("A pessoa mais nova é: %s, com %d anos.\n", nomeMaisNovo, idadeMaisNova);
    printf("A pessoa mais velha é: %s, com %d anos.\n", nomeMaisVelho, idadeMaisVelha);

    return 0;
}
