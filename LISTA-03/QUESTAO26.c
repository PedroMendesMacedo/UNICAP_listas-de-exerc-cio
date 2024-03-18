#include <stdio.h>
#include <string.h>

int main() {
    char cidade[30];
    char estado[30];

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Digite o nome do estado: ");
    scanf("%s", estado);

    printf("Você mora em %s, %s.\n", cidade, estado);

    return 0;
}
