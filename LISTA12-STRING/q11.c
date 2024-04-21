#include <stdio.h>
#include <string.h>

int ehVogal(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void removerVogais(char string[]) {
    int j = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (!ehVogal(string[i])) {
            string[j++] = string[i];
        }
    }
    string[j] = '\0'; 
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    scanf("%s", string);

    removerVogais(string);

    printf("String sem vogais: %s\n", string);

    return 0;
}
