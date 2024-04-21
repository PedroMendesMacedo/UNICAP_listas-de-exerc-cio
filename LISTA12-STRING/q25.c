#include <stdio.h>
#include <string.h>

int main() {
    char palavra1[100], palavra2[100];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);

    int comparacao = strcmp(palavra1, palavra2);

    if (comparacao < 0) {
        printf("%s vem primeiro na ordem alfabética.\n", palavra1);
    } else if (comparacao > 0) {
        printf("%s vem primeiro na ordem alfabética.\n", palavra2);
    } else {
        printf("As palavras são iguais.\n");
    }

    return 0;
}
