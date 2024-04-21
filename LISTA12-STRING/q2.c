#include <stdio.h>

int comprimentoString(char string[]) {
    int comprimento = 0;

    while (string[comprimento] != '\0') {
        comprimento++;
    }

    return comprimento;
}

int main() {
    char string[100]; 
    printf("Digite uma string: ");
    scanf("%99s", string); 

    int comprimento = comprimentoString(string); 
    printf("O comprimento da string é: %d\n", comprimento);

    return 0;
}
