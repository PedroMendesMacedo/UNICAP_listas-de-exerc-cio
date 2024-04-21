#include <stdio.h>

int main() {
    char vetor[1000]; 
    int i, j;

    printf("Digite uma frase: ");
    scanf("%[^\n]", vetor); 

    for (i = 0, j = 0; vetor[i] != '\0'; i++) {
        if (vetor[i] != ' ') {
            vetor[j++] = vetor[i];
        }
    }
    vetor[j] = '\0'; 

    printf("Vetor resultante: %s\n", vetor);

    return 0;
}
