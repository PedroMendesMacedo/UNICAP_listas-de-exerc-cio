#include <stdio.h>

int main() {
    int vetor[10];
    int i, menor;

    printf("Insira 10 valores no vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    // Encontrar o menor elemento no vetor
    menor = vetor[0];
    for (i = 1; i < 10; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("O menor elemento do vetor é: %d\n", menor);

    return 0;
}
