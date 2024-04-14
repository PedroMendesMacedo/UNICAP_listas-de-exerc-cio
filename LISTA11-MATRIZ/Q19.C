#include <stdio.h>

#define LINHAS 3
#define COLUNAS 6

int main() {
    float matriz[LINHAS][COLUNAS];
    float soma_colunas_impares = 0;
    float media_segunda_quarta_colunas = 0;
    int i, j;

    // Leitura da matriz
    printf("Digite os elementos da matriz %dx%d:\n", LINHAS, COLUNAS);
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("\nMatriz original:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma dos elementos das colunas impares:\n");
    for (j = 0; j < COLUNAS; j += 2) {
        float soma_coluna = 0;
        for (i = 0; i < LINHAS; i++) {
            soma_coluna += matriz[i][j];
        }
        soma_colunas_impares += soma_coluna;
        printf("Coluna %d: %.2f\n", j + 1, soma_coluna);
    }
    printf("Soma total das colunas impares: %.2f\n", soma_colunas_impares);

    printf("\nMedia aritmetica dos elementos da segunda e quarta colunas:\n");
    for (i = 0; i < LINHAS; i++) {
        media_segunda_quarta_colunas += matriz[i][1] + matriz[i][3];
    }
    media_segunda_quarta_colunas /= (2 * LINHAS);
    printf("%.2f\n", media_segunda_quarta_colunas);

    printf("\nSubstituindo os valores da sexta coluna pela soma dos valores das colunas 1 e 2:\n");
    for (i = 0; i < LINHAS; i++) {
        matriz[i][5] = matriz[i][0] + matriz[i][1];
    }

    printf("\nMatriz modificada:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
