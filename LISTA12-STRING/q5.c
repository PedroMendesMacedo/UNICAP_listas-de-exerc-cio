#include <stdio.h>

int main() {
    char nome[100]; 
    int contador = 0;

    printf("Digite o nome: ");
    scanf("%99[^\n]", nome); 

    for (int i = 0; nome[i] != '\0'; i++) {
        if (nome[i] != ' ') {
            contador++;
        }
    }

    printf("O nome tem %d caracteres.\n", contador);

    return 0;
}
