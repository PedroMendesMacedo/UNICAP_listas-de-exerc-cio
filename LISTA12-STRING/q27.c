#include <stdio.h>
#include <string.h>

int contidaNoFinal(char str1[], char str2[]) {
    int tamanho1 = strlen(str1);
    int tamanho2 = strlen(str2);

    if (tamanho2 > tamanho1) {
        return 0;
    }

    for (int i = 0; i < tamanho2; i++) {
        if (str1[tamanho1 - tamanho2 + i] != str2[i]) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (contidaNoFinal(str1, str2)) {
        printf("A segunda string está contida no final da primeira.\n");
    } else {
        printf("A segunda string não está contida no final da primeira.\n");
    }

    return 0;
}
