#include <stdio.h>

void substituirLetra(char string[], char L1, char L2) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == L1) {
            string[i] = L2;
        }
    }
}

int main() {
    char string[1000];
    char L1, L2;

    printf("Digite uma string: ");
    scanf("%s", string);

    printf("Digite a letra L1 a ser substituída: ");
    scanf(" %c", &L1); 

    printf("Digite a letra L2 que substituirá a L1: ");
    scanf(" %c", &L2); 

    substituirLetra(string, L1, L2);

    printf("String com as substituições: %s\n", string);

    return 0;
}
