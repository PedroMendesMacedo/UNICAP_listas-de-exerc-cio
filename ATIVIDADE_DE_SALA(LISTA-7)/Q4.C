#include <stdio.h>

void trocarValores(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int valorA, valorB;

    printf("Diga o valor da 1º variavel (A): ");
    scanf("%d", &valorA);

    printf("agr o valor da 2º variavel (B): ");
    scanf("%d", &valorB);

    printf("\nesses são os valores antes da troca:\n");
    printf("A: %d\n", valorA);
    printf("B: %d\n", valorB);

    trocarValores(&valorA, &valorB);

    printf("\nagr esses são os valores depois da troca:\n");
    printf("A: %d\n", valorA);
    printf("B: %d\n", valorB);

    return 0;
}
