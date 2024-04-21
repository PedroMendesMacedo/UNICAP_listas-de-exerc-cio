#include <stdio.h>

int compararStrings(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }

    return str1[i] - str2[i];
}

int main() {
    char string1[100];
    char string2[100];

    printf("Digite a primeira string: ");
    scanf("%99s", string1);

    printf("Digite a segunda string: ");
    scanf("%99s", string2);

    int resultado = compararStrings(string1, string2);

    if (resultado == 0) {
        printf("As strings são iguais.\n");
    } else if (resultado < 0) {
        printf("A primeira string é menor que a segunda.\n");
    } else {
        printf("A primeira string é maior que a segunda.\n");
    }

    return 0;
}
