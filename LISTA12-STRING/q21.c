#include <stdio.h>
#include <string.h>

void inverterTrocarAporEstrela(char frase[]) {
    int tamanho = strlen(frase);

    for (int i = 0; i < tamanho; i++) {
        if (frase[i] == 'A' || frase[i] == 'a') {
            frase[i] = '*';
        }
    }

    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", frase[i]);
    }
    printf("\n");
}

int main() {
    char frase1[100], frase2[100];

    printf("Digite a primeira frase: ");
    scanf("%s", frase1);

    printf("Digite a segunda frase: ");
    scanf("%s", frase2);

    printf("Primeira frase invertida com A trocado por *: ");
    inverterTrocarAporEstrela(frase1);

    printf("Segunda frase invertida com A trocado por *: ");
    inverterTrocarAporEstrela(frase2);

    return 0;
}
