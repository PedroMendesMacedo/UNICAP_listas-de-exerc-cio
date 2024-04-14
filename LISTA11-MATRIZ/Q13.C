#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 4

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;

    srand(time(NULL));

    printf("Matriz original:\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            matriz[i][j] = rand() % 20 + 1; 
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < TAMANHO; i++) {
        for (j = i + 1; j < TAMANHO; j++) {
            matriz[i][j] = 0;
        }
    }

    printf("\nMatriz transformada (triangular inferior):\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
