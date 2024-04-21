#include <stdio.h>

void substituirCaractere(char string[], char original, char substituto) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == original) {
            string[i] = substituto;
        }
    }
}

int main() {
    char string[100];

    printf("Digite a string: ");
    scanf("%s", string);

    substituirCaractere(string, '0', '1');

    printf("String com '0's substituídos por '1's: %s\n", string);

    return 0;
}
