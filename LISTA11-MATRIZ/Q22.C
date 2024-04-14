#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

void multiplica_matrizes(int matriz[LINHAS][COLUNAS], int resultado[LINHAS][COLUNAS]) {
    int i, j, k;
    int temp[LINHAS][COLUNAS];

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            temp[i][j] = matriz[i][j]; 
            resultado[i][j] = 0; 
        }
    }

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            for (k = 0; k < COLUNAS; k++) {
                resultado[i][j] += temp[i][k] * matriz[k][j]; 
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

    printf("Digite os elementos da matriz A %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }

    multiplica_matrizes(matrizA, matrizB);

    printf("\nMatriz resultante B (A^2):\n");
    imprime_matriz(matrizB);

    return 0;
}
