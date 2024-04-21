#include <stdio.h>

int main() {
    char nome[100];

    printf("Digite um nome: ");
    scanf("%s", nome);

    if (nome[0] == 'a' || nome[0] == 'A') {
        printf("%s\n", nome);
    }else {
        printf("Seu nome não começa com 'a'");
    }

    return 0;
}
