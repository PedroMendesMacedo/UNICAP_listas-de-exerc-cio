#include <stdio.h>

int encontrarCaractere(char string[], char caractere, int posicao) {
    for (int i = posicao; string[i] != '\0'; i++) {
        if (string[i] == caractere) {
            return i;
        }
    }
    return -1;
}

int main() {
    char string[100], caractere;
    int posicao, indice;

    printf("Digite uma string: ");
    scanf("%s", string);
    printf("Digite um caractere: ");
    scanf(" %c", &caractere); 
    printf("Digite a posição de início da busca: ");
    scanf("%d", &posicao);

    indice = encontrarCaractere(string, caractere, posicao);

    if (indice != -1) {
        printf("O caractere '%c' foi encontrado na posição %d da string.\n", caractere, indice);
    } else {
        printf("O caractere '%c' não foi encontrado na string a partir da posição %d.\n", caractere, posicao);
    }

    return 0;
}
