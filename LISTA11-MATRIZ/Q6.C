#include <stdio.h>

#define TAMANHO 4

int main() {
    int matriz1[TAMANHO][TAMANHO], matriz2[TAMANHO][TAMANHO], matriz_resultante[TAMANHO][TAMANHO];
    int i, j;

    printf("Digite os elementos da primeira matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            matriz_resultante[i][j] = (matriz1[i][j] > matriz2[i][j]) ? matriz1[i][j] : matriz2[i][j];
        }
    }

    printf("Matriz resultante com os maiores valores de cada posição:\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%d ", matriz_resultante[i][j]);
        }
        printf("\n");
    }

    return 0;
}
