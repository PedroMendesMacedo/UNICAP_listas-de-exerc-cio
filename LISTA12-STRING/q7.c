#include <stdio.h>

int contarUns(char string[]) {
    int contador = 0;

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '1') {
            contador++;
        }
    }

    return contador;
}

int main() {
    char string[100];

    printf("Digite a string contendo 0s e 1s: ");
    scanf("%s", string);

    int numUns = contarUns(string);

    printf("O número de 1's na string é: %d\n", numUns);

    return 0;
}
