#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("diga o valor da 1º variavel: ");
    scanf("%d", &numero1);

    printf("agr o valor da 2º variavel: ");
    scanf("%d", &numero2);

    printf("\nendereco de memoria da 1º variavel: %p\n", (void*)&numero1);
    printf("endereco de memoria da 2º variavel: %p\n", (void*)&numero2);

    return 0;
}