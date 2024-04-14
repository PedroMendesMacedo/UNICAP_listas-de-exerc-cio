#include <stdio.h>

#define TAMANHO 5 

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            matriz[i][j] = (i + 1) * (j + 1); 
        }
    }

    printf("Matriz resultante:\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
