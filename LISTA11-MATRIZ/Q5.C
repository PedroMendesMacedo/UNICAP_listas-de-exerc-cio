#include <stdio.h>

#define TAMANHO 5

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j, valor_X;
    int encontrado = 0; 

    printf("Digite os elementos da matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o valor a ser procurado (X): ");
    scanf("%d", &valor_X);

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            if (matriz[i][j] == valor_X) {
                encontrado = 1;
                printf("O valor %d foi encontrado na linha %d e coluna %d.\n", valor_X, i + 1, j + 1);
            }
        }
    }

    if (!encontrado) {
        printf("O valor %d não foi encontrado na matriz.\n", valor_X);
    }

    return 0;
}
