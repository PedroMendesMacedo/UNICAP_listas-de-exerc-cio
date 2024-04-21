#include <stdio.h>
#include <string.h>

void imprimirSegmento(char string[], int I, int J) {
    int tamanho = strlen(string);

    if (I < 0 || J >= tamanho) {
        printf("Os índices fornecidos estão fora dos limites da string.\n");
        return;
    }

    printf("Segmento S[%d..%d]: ", I, J);
    for (int i = I; i <= J; i++) {
        printf("%c", string[i]);
    }
    printf("\n");
}

int main() {
    char string[100];
    int I, J;

    printf("Digite uma string: ");
    scanf("%s", string);
    printf("Digite o valor de I: ");
    scanf("%d", &I);
    printf("Digite o valor de J: ");
    scanf("%d", &J);

    imprimirSegmento(string, I, J);

    return 0;
}
