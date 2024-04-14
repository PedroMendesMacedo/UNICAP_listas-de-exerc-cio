#include <stdio.h>

#define TAMANHO 3

int main() {
    int matriz[TAMANHO][TAMANHO];
    int transposta[TAMANHO][TAMANHO];
    int i, j;

    // Lendo a matriz
    printf("Digite os elementos da matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("A matriz transposta é:\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
