#include <stdio.h>

#define LINHAS 2
#define COLUNAS 2

void soma_matrizes(float matriz1[LINHAS][COLUNAS], float matriz2[LINHAS][COLUNAS], float resultado[LINHAS][COLUNAS]) {
    int i, j;
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void subtrai_matrizes(float matriz1[LINHAS][COLUNAS], float matriz2[LINHAS][COLUNAS], float resultado[LINHAS][COLUNAS]) {
    int i, j;
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

void adiciona_constante(float matriz[LINHAS][COLUNAS], float constante) {
    int i, j;
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            matriz[i][j] += constante;
        }
    }
}

void imprime_matriz(float matriz[LINHAS][COLUNAS]) {
    int i, j;
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    float matriz1[LINHAS][COLUNAS];
    float matriz2[LINHAS][COLUNAS];
    float resultado[LINHAS][COLUNAS];
    float constante;
    int opcao;

    // Leitura das matrizes
    printf("Digite os elementos da primeira matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%f", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            scanf("%f", &matriz2[i][j]);
        }
    }

    printf("\nMenu de Opcoes:\n");
    printf("a. Somar as duas matrizes\n");
    printf("b. Subtrair a primeira matriz da segunda\n");
    printf("c. Adicionar uma constante as duas matrizes\n");
    printf("Escolha a opcao (a, b, c): ");
    scanf(" %c", &opcao);

    switch (opcao) {
        case 'a':
            soma_matrizes(matriz1, matriz2, resultado);
            printf("\nResultado da soma:\n");
            imprime_matriz(resultado);
            break;
        case 'b':
            subtrai_matrizes(matriz1, matriz2, resultado);
            printf("\nResultado da subtracao:\n");
            imprime_matriz(resultado);
            break;
        case 'c':
            printf("Digite a constante a ser adicionada: ");
            scanf("%f", &constante);
            adiciona_constante(matriz1, constante);
            adiciona_constante(matriz2, constante);
            printf("\nMatriz 1 com a constante adicionada:\n");
            imprime_matriz(matriz1);
            printf("\nMatriz 2 com a constante adicionada:\n");
            imprime_matriz(matriz2);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
