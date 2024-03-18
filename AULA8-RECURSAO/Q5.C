#include <stdio.h>

void imprimir_decrescente(int n) {
    if (n == 0) {
        printf("%d ", n);
        return;
    }
    
    printf("%d ", n);
    imprimir_decrescente(n - 1);
}

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    printf("Números naturais de 0 até %d em ordem decrescente:\n", numero);
    imprimir_decrescente(numero);
    printf("\n");

    return 0;
}
