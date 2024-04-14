#include <stdio.h>

#define TAMANHO 3

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;
    int soma_diagonal_secundaria = 0;

    printf("Digite os elementos da matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < TAMANHO; i++) {
        soma_diagonal_secundaria += matriz[i][TAMANHO - 1 - i];
    }

    printf("A soma dos elementos na diagonal secundária é: %d\n", soma_diagonal_secundaria);

    return 0;
}
