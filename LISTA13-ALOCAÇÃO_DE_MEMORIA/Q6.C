#include <stdio.h>
#include <stdlib.h>

int* alocarMemoria(int tamanho) {
    if (tamanho % sizeof(int) != 0) {
        printf("Erro: O tamanho da memória deve ser um múltiplo do tamanho de um inteiro.\n");
        exit(1); 

    int *memoria = (int*) calloc(tamanho / sizeof(int), sizeof(int));

    if (memoria == NULL) {
        printf("Erro: Memória não pode ser alocada.\n");
        exit(1); 
    }

    return memoria;
}

void inserirValor(int *memoria, int posicao, int valor) {
    if (posicao >= 0 && posicao < sizeof(memoria) / sizeof(int)) {
        memoria[posicao] = valor;
        printf("Valor %d inserido na posição %d.\n", valor, posicao);
    } else {
        printf("Erro: Posição fora dos limites da memória.\n");
    }
}

void consultarValor(int *memoria, int posicao) {
    if (posicao >= 0 && posicao < sizeof(memoria) / sizeof(int)) {
        printf("Valor na posição %d: %d\n", posicao, memoria[posicao]);
    } else {
        printf("Erro: Posição fora dos limites da memória.\n");
    }
}

int main() {
    int tamanho;

    printf("Digite o tamanho da memória (em bytes): ");
    scanf("%d", &tamanho);

    int *memoria = alocarMemoria(tamanho);

    int opcao, posicao, valor;

    do {
        printf("\nOpções:\n");
        printf("1. Inserir um valor em uma posição\n");
        printf("2. Consultar o valor em uma posição\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a posição onde deseja inserir o valor: ");
                scanf("%d", &posicao);
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                inserirValor(memoria, posicao, valor);
                break;
            case 2:
                printf("Digite a posição que deseja consultar: ");
                scanf("%d", &posicao);
                consultarValor(memoria, posicao);
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }

    } while (opcao != 0);

    free(memoria);

    return 0; 
}
