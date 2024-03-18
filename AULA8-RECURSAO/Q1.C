#include <stdio.h>

int soma_ate_n(int n) {
    if (n == 1)
        return 1;
    else
        return n + soma_ate_n(n - 1);
}

int main() {
    int numero, resultado;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    resultado = soma_ate_n(numero);

    printf("A soma dos números de 1 até %d é igual a: %d\n", numero, resultado);

    return 0;
}
