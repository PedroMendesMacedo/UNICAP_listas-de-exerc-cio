#include <stdio.h>

int calcular_fatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * calcular_fatorial(n - 1);
}

int main() {
    int numero, resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    resultado = calcular_fatorial(numero);

    printf("O fatorial de %d é igual a: %d\n", numero, resultado);

    return 0;
}
