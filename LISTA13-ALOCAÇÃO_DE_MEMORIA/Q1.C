#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros = (int*) malloc(5 * sizeof(int));

    if (numeros == NULL) {
        printf("Erro: Memória não pode ser alocada.\n");
        return 1; 
    }

    printf("Digite 5 números inteiros separados por espaço:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Os números digitados foram:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    free(numeros);

    return 0; 
}
