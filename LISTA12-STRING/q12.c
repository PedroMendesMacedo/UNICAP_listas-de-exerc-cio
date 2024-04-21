#include <stdio.h>
#include <string.h>

int contarVogais(char palavra[]) {
    int contador = 0;

    for (int i = 0; palavra[i] != '\0'; i++) {
        switch (palavra[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                contador++;
                break;
            default:
                break;
        }
    }

    return contador;
}

void substituirVogais(char palavra[], char substituto) {
    for (int i = 0; palavra[i] != '\0'; i++) {
        switch (palavra[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                palavra[i] = substituto;
                break;
            default:
                break;
        }
    }
}

int main() {
    char palavra[100];
    char caractere;
    int numVogais;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &caractere); 
    
    numVogais = contarVogais(palavra);
    printf("A palavra tem %d vogais.\n", numVogais);

    substituirVogais(palavra, caractere);

    printf("Palavra com vogais substituídas: %s\n", palavra);

    return 0;
}
