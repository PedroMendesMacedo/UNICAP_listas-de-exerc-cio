#include <stdio.h>

#define TAMANHO 10

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            if (i < j) {
                matriz[i][j] = 2 * i + 7 * j;
            } else if (i == j) {
                matriz[i][j] = 3 * i * i;
            } else {
                matriz[i][j] = 5 * j * j + 1;
            }
        }
    }

    printf("Matriz gerada:\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
