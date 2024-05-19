#include <stdio.h>
#include <stdlib.h>

int** alocarMatriz(int linhas, int colunas) {
    int **matriz = (int**) malloc(linhas * sizeof(int*));

    if (matriz == NULL) {
        printf("Erro: Memória não pode ser alocada.\n");
        exit(1); 
    }

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*) malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro: Memória não pode ser alocada.\n");
            exit(1); 
        }
    }

    return matriz;
}

int valorEstaNaMatriz(int **matriz, int linhas, int colunas, int valor) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == valor) {
                return 1; 
            }
        }
    }
    return 0; 
}

int main() {
    int linhas, colunas;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int **matriz = alocarMatriz(linhas, colunas);

    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int valor;

    printf("Digite um valor para verificar se está na matriz: ");
    scanf("%d", &valor);

    if (valorEstaNaMatriz(matriz, linhas, colunas, valor)) {
        printf("O valor %d está na matriz.\n", valor);
    } else {
        printf("O valor %d não está na matriz.\n", valor);
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0; 
}
