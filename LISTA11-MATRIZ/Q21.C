#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

void multiplica_matrizes(int matriz1[LINHAS][COLUNAS], int matriz2[LINHAS][COLUNAS], int resultado[LINHAS][COLUNAS]) {
    int i, j, k;

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            resultado[i][j] = 0;
            for (k = 0; k < COLUNAS; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

void imprime_matriz(int matriz[LINHAS][COLUNAS]) {
    int i, j;
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrizA[LINHAS][COLUNAS];
    int matrizB[LINHAS][COLUNAS];
    int matrizC[LINHAS][COLUNAS];

    // Leitura das matrizes A e B
    printf("Digite os elementos da matriz A %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Digite os elementos da matriz B %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

    multiplica_matrizes(matrizA, matrizB, matrizC);

    printf("\nMatriz resultante C:\n");
    imprime_matriz(matrizC);

    return 0;
}
