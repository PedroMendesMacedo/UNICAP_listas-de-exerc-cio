#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 3 == 0 && numero % 5 == 0) {
        printf("%d é divisível por 3 e por 5 ao mesmo tempo.\n", numero);
    } else {
        printf("%d não é divisível por 3 e por 5 ao mesmo tempo.\n", numero);
    }

    return 0;
}
