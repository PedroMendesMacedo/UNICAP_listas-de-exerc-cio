#include <stdio.h>

int main() {
    char nome[100]; 

    printf("Digite o nome: ");
    scanf("%99s", nome); 

    printf("As 4 primeiras letras do nome são: ");
    for (int i = 0; i < 4 && nome[i] != '\0'; i++) {
        printf("%c", nome[i]);
    }
    printf("\n");

    return 0;
}
