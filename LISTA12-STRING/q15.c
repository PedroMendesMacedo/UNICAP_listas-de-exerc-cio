#include <stdio.h>

int main() {
    char cadeia[100];

    printf("Digite uma cadeia de caracteres: ");
    scanf("%s", cadeia);

    for (int i = 0; cadeia[i] != '\0'; i++) {
        if (cadeia[i] >= 'a' && cadeia[i] <= 'z') {
            cadeia[i] -= 32;
        }
    }

    printf("Cadeia de caracteres em maiúscula: %s\n", cadeia);

    return 0;
}
