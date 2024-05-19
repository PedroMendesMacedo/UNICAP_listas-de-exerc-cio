#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, pares = 0, impares = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int*) malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro: Memória não pode ser alocada.\n");
        return 1; 
    }

    printf("Digite os %d valores do vetor separados por espaço:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Dos %d números digitados, %d são pares e %d são ímpares.\n", tamanho, pares, impares);

    free(vetor);

    return 0; 
}
