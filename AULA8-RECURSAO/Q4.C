#include <stdio.h>

void imprimir_crescente(int n) {
    if (n == 0) {
        printf("%d ", n);
        return;
    }
    
    imprimir_crescente(n - 1);
    printf("%d ", n);
}

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    printf("Números naturais de 0 até %d em ordem crescente:\n", numero);
    imprimir_crescente(numero);
    printf("\n");

    return 0;
}
