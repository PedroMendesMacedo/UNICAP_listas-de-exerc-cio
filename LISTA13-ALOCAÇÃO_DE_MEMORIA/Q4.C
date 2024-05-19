#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* alocarString(int tamanho) {
    char *string = (char*) malloc((tamanho + 1) * sizeof(char)); 

    if (string == NULL) {
        printf("Erro: Memória não pode ser alocada.\n");
        exit(1); 
    }

    return string;
}

void imprimirSemVogais(char *string) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] != 'a' && string[i] != 'A' &&
            string[i] != 'e' && string[i] != 'E' &&
            string[i] != 'i' && string[i] != 'I' &&
            string[i] != 'o' && string[i] != 'O' &&
            string[i] != 'u' && string[i] != 'U') {
            printf("%c", string[i]); 
        }
    }
    printf("\n");
}

int main() {
    int tamanho;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);

    char *string = alocarString(tamanho);

    printf("Digite o conteúdo da string: ");
    scanf("%s", string);

    printf("A string sem suas vogais é: ");
    imprimirSemVogais(string);

    free(string);

    return 0; 
}
