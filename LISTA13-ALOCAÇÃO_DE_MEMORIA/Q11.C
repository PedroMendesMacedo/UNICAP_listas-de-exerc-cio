#include <stdio.h>
#include <stdlib.h>

int* realocarVetor(int *vetor, int tamanho) {
    int *novo_vetor = (int*) malloc((tamanho + 10) * sizeof(int));

    if (novo_vetor == NULL) {
        printf("Erro: Memória não pode ser alocada.\n");
        exit(1); 
    }

    for (int i = 0; i < tamanho; i++) {
        novo_vetor[i] = vetor[i];
    }

    free(vetor);

    return novo_vetor;
}

int main() {
    int tamanho_atual = 10; 
    int *vetor = (int*) malloc(tamanho_atual * sizeof(int)); 

    if (vetor == NULL) {
        printf("Erro: Memória não pode ser alocada.\n");
        return 1; 
    }

    int numero, indice = 0;

    while (1) {
        printf("Digite um número (ou 0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        vetor[indice] = numero;
        indice++;

        if (indice == tamanho_atual) {
            vetor = realocarVetor(vetor, tamanho_atual);
            tamanho_atual += 10; 
        }
    }

    printf("O vetor lido é:\n");
    for (int i = 0; i < indice; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0; 
}
