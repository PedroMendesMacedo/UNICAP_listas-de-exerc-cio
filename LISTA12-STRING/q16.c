#include <stdio.h>

int main() {
    char cadeia[100];

    printf("Digite uma cadeia de caracteres: ");
    scanf("%s", cadeia);

    for (int i = 0; cadeia[i] != '\0'; i++) {
        if (cadeia[i] >= 'A' && cadeia[i] <= 'Z') {
            cadeia[i] += ('a' - 'A');
        }
    }

    printf("Cadeia de caracteres em minúscula: %s\n", cadeia);

    return 0;
}
