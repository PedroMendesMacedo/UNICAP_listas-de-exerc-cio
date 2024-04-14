#include <stdio.h>

int main() {
    int Leia[4][4] = {
        {1, 15, 6, 8},
        {12, 3, 9, 20},
        {5, 11, 7, 4},
        {14, 2, 18, 10}
    };

    int contador = 0;
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (Leia[i][j] > 10) {
                contador++;
            }
        }
    }

    printf("A matriz Leia possui %d valores maiores que 10.\n", contador);

    return 0;
}
