#include <stdio.h>

#define TAMANHO 3

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;
    int soma_abaixo_diagonal = 0;

    printf("Digite os elementos da matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            if (i > j) {
                soma_abaixo_diagonal += matriz[i][j];
            }
        }
    }

    printf("A soma dos elementos abaixo da diagonal principal é: %d\n", soma_abaixo_diagonal);

    return 0;
}
