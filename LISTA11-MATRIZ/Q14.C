#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 5

int main() {
    int cartela[TAMANHO][TAMANHO];
    int numeros_escolhidos[100] = {0}; 
    int i, j, num;

    srand(time(NULL));

    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            do {
                num = rand() % 100;
            } while (numeros_escolhidos[num]); 
            cartela[i][j] = num;
            numeros_escolhidos[num] = 1; 
        }
    }

    printf("Cartela de Bingo:\n");
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO; j++) {
            printf("%2d ", cartela[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
