#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int numero, resultado;

    printf("Digite o valor de N para calcular o N-ésimo termo da sequência de Fibonacci: ");
    scanf("%d", &numero);

    resultado = fibonacci(numero);

    printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", numero, resultado);

    return 0;
}
