#include <stdio.h>

int main() {
    int valores[5];
    int i, maior, menor, posicao_maior, posicao_menor;

    printf("Insira 5 valores:\n");
    for (i = 0; i < 5; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &valores[i]);
    }

    maior = menor = valores[0];
    posicao_maior = posicao_menor = 0;
    for (i = 1; i < 5; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
            posicao_maior = i;
        }
        if (valores[i] < menor) {
            menor = valores[i];
            posicao_menor = i;
        }
    }

    printf("A posição do maior valor (%d) é: %d\n", maior, posicao_maior);
    printf("A posição do menor valor (%d) é: %d\n", menor, posicao_menor);

    return 0;
}
