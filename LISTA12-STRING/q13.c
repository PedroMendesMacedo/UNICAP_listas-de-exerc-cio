#include <stdio.h>

int contarCaracteresBrancos(char frase[]) {
    int contador = 0;

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            contador++;
        }
    }

    return contador;
}

int main() {
    char frase[1000];

    printf("Digite uma frase: ");
    scanf("%[^\n]", frase); 
    
    int numCaracteresBrancos = contarCaracteresBrancos(frase);

    printf("A frase tem %d caracteres brancos.\n", numCaracteresBrancos);

    return 0;
}
