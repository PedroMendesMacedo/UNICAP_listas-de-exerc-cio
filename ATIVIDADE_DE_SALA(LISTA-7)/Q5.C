#include <stdio.h>

int somaDobro(int a, int b) {
    int dobroA = 2 * a;
    int dobroB = 2 * b;

    return dobroA + dobroB;
}

int main() {
    int valorA, valorB;

    printf("Diga o valor da 1º variavel (A): ");
    scanf("%d", &valorA);

    printf("agr o valor da 2º variavel (B): ");
    scanf("%d", &valorB);

    int resultado = somaDobro(valorA, valorB);

    printf("\na soma do dobro de %d e %d é: %d\n", valorA, valorB, resultado);

    return 0;
}
