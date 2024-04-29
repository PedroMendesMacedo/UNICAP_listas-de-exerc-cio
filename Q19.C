#include <stdio.h>

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 1) {
        printf("Você é um bebê.\n");
    } else if (idade > 1 && idade <= 12) {
        printf("Você é uma criança.\n");
    } else if (idade >= 13 && idade <= 18) {
        printf("Você é um adolescente.\n");
    } else if (idade > 18) {
        printf("Você é um adulto.\n");
    } else {
        printf("Idade inválida.\n");
    }

    return 0;
}
