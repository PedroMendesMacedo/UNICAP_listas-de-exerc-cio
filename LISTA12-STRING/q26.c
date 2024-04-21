#include <stdio.h>

#define DESLOCAMENTO 3

void cifraCesar(char texto[]) {
    int i = 0;

    while (texto[i] != '\0') {
        if (texto[i] >= 'A' && texto[i] <= 'Z') {
            texto[i] = 'A' + (texto[i] - 'A' + DESLOCAMENTO) % 26;
        }
        else if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = 'a' + (texto[i] - 'a' + DESLOCAMENTO) % 26;
        }
        i++;
    }
}

int main() {
    char texto[1000];

    printf("Digite uma string: ");
    scanf("%[^\n]", texto);

    cifraCesar(texto);

    printf("String codificada: %s\n", texto);

    return 0;
}
