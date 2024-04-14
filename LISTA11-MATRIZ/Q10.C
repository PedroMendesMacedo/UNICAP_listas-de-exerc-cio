#include <stdio.h>

#define TAMANHO 3

int main() {
    int matriz[TAMANHO][TAMANHO];
    int i, j;
    int soma_diagonal_principal = 0;

    printf("Digite os elementos da matriz %dx%d:\n", TAMANHO, TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < TAMANHO; i++) {
        soma_diagonal_principal += matriz[i][i];
    }

    printf("A soma dos elementos na diagonal principal é: %d\n", soma_diagonal_principal);

    return 0;
}
