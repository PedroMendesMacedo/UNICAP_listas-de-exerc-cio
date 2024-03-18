#include <stdio.h>

int main() {
    int vetor[10];
    int i, j;

    printf("Insira 10 valores no vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Valores iguais no vetor:\n");
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d está na posição %d e %d está na posição %d\n", vetor[i], i, vetor[j], j);
            }
        }
    }

    return 0;
}
