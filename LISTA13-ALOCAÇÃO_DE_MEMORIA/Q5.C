#include <stdio.h>
#include <stdlib.h>

int* alocarVetor(int tamanho) {
    int *vetor = (int*) malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro: Memória não pode ser alocada.\n");
        exit(1); 
    }

    return vetor;
}

int main() {
    int N;

    printf("Digite o número de elementos do vetor: ");
    scanf("%d", &N);

    int *vetor = alocarVetor(N);

    printf("Digite os %d elementos do vetor separados por espaço:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    int X, count = 0;

    printf("Digite o número X para encontrar seus múltiplos no vetor: ");
    scanf("%d", &X);

    printf("Os múltiplos de %d no vetor são:\n", X);
    for (int i = 0; i < N; i++) {
        if (vetor[i] % X == 0) {
            printf("%d ", vetor[i]);
            count++;
        }
    }

    if (count == 0) {
        printf("Não há múltiplos de %d no vetor.\n", X);
    } else {
        printf("\nTotal de múltiplos de %d: %d\n", X, count);
    }

    free(vetor);

    return 0;
}
