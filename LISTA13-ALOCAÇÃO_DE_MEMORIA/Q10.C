#include <stdio.h>
#include <stdlib.h>

float** alocarMatriz(int linhas, int colunas) {
    float **matriz = (float**) malloc(linhas * sizeof(float*));

    if (matriz == NULL) {
        printf("Erro: Memória não pode ser alocada.\n");
        exit(1); 
    }

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (float*) malloc(colunas * sizeof(float));
        if (matriz[i] == NULL) {
            printf("Erro: Memória não pode ser alocada.\n");
            exit(1); 
        }
    }

    return matriz;
}

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    float **matriz = alocarMatriz(linhas, colunas);

    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("Matriz lida:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0; 
}
