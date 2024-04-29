#include <stdio.h>

int main() {
    float metros;

    printf("Digite o valor em metros: ");
    if (scanf("%f", &metros) != 1) {
        printf("Erro: Entrada inválida.\n");
        return 1;
    }

    if (metros < 0) {
        printf("Erro: O valor em metros deve ser não negativo.\n");
        return 1;
    }

    float centimetros = metros * 100;
    float milimetros = metros * 1000;
    float quilometros = metros / 1000;

    printf("%.2f metros é igual a:\n", metros);
    printf("%.2f centímetros\n", centimetros);
    printf("%.2f milímetros\n", milimetros);
    printf("%.5f quilômetros\n", quilometros);

    return 0;
}

