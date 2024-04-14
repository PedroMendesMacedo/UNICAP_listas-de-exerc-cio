#include <stdio.h>

#define TAMANHO 4

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;
    int maior_valor = matriz[0][0]; 
    int linha_maior, coluna_maior;

    printf("Digite os elementos da matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > maior_valor) {
                maior_valor = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    printf("Matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("O maior valor da matriz é %d e está localizado na linha %d e coluna %d.\n", maior_valor, linha_maior + 1, coluna_maior + 1);

    return 0;
}
