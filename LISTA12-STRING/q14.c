#include <stdio.h>

int main() {
    char palavra[51]; 
    int valores_ascii[50]; 
    int i;

    printf("Digite uma palavra (máximo de 50 letras): ");
    scanf("%s", palavra);

    printf("Valores ASCII de cada caractere da palavra:\n");
    for (i = 0; palavra[i] != '\0'; i++) {
        valores_ascii[i] = (int) palavra[i]; 
        printf("Caractere: %c -> Valor ASCII: %d\n", palavra[i], valores_ascii[i]);
    }

    return 0;
}
