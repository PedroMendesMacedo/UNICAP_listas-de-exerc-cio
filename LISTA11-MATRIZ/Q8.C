#include <stdio.h>

#define TAMANHO 3

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;
    int soma_acima_diagonal = 0;

    printf("Digite os elementos da matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            if (j > i) {
                soma_acima_diagonal += matriz[i][j];
            }
        }
    }

    printf("A soma dos elementos acima da diagonal principal é: %d\n", soma_acima_diagonal);

    return 0;
}
