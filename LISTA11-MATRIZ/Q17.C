#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS];
    int soma_colunas[COLUNAS] = {0};
    int i, j;

    printf("Digite os elementos da matriz %dx%d:\n", LINHAS, COLUNAS);
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (j = 0; j < COLUNAS; j++) {
        for (i = 0; i < LINHAS; i++) {
            soma_colunas[j] += matriz[i][j];
        }
    }

    printf("\nArray unidimensional resultante (soma das colunas):\n");
    for (j = 0; j < COLUNAS; j++) {
        printf("%d ", soma_colunas[j]);
    }
    printf("\n");

    return 0;
}
