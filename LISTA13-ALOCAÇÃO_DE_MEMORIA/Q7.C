#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho = 1500;

    int *vetor = (int*) calloc(tamanho, sizeof(int));

    if (vetor == NULL) {
        printf("Erro: Memória não pode ser alocada.\n");
        return 1; 
    }

    int count_zeros = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == 0) {
            count_zeros++;
        }
    }

    if (count_zeros == tamanho) {
        printf("O vetor contém 1500 valores inicializados com zero.\n");
    } else {
        printf("Erro: O vetor não contém 1500 valores inicializados com zero.\n");
        free(vetor);
        return 1;
    }

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i;
    }

    printf("Os 10 primeiros elementos do vetor são:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Os 10 últimos elementos do vetor são:\n");
    for (int i = tamanho - 10; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0; 
}
