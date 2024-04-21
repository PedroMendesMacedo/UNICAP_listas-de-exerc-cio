#include <stdio.h>
#include <string.h>

void lerString(char S1[]) {
    printf("Digite a string S1 (com no máximo 20 caracteres): ");
    scanf("%s", S1);
}

void imprimirTamanhoString(char S1[]) {
    printf("O tamanho da string S1 é: %lu\n", strlen(S1));
}

void compararStrings(char S1[], char S2[]) {
    if (strcmp(S1, S2) == 0) {
        printf("As strings S1 e S2 são iguais.\n");
    } else {
        printf("As strings S1 e S2 são diferentes.\n");
    }
}

void concatenarStrings(char S1[], char S2[]) {
    strcat(S1, S2);
    printf("A concatenação das strings S1 e S2 é: %s\n", S1);
}

void imprimirReverso(char S1[]) {
    printf("A string S1 de forma reversa é: ");
    for (int i = strlen(S1) - 1; i >= 0; i--) {
        printf("%c", S1[i]);
    }
    printf("\n");
}

void contarCaractere(char S1[], char caractere) {
    int contador = 0;
    for (int i = 0; S1[i] != '\0'; i++) {
        if (S1[i] == caractere) {
            contador++;
        }
    }
    printf("O caractere '%c' aparece %d vezes na string S1.\n", caractere, contador);
}

void substituirCaractere(char S1[], char C1, char C2) {
    for (int i = 0; S1[i] != '\0'; i++) {
        if (S1[i] == C1) {
            S1[i] = C2;
            break; 
        }
    }
    printf("A string S1 após substituir '%c' por '%c' é: %s\n", C1, C2, S1);
}

void verificarSubstring(char S1[], char S2[]) {
    if (strstr(S1, S2) != NULL) {
        printf("A string S2 é uma substring de S1.\n");
    } else {
        printf("A string S2 não é uma substring de S1.\n");
    }
}

void retornarSubstring(char S1[], int posicao, int tamanho) {
    char substring[21];
    strncpy(substring, S1 + posicao, tamanho);
    substring[tamanho] = '\0'; 
    printf("A substring de S1 a partir da posição %d com tamanho %d é: %s\n", posicao, tamanho, substring);
}

int main() {
    char S1[21], S2[21];
    char caractere, C1, C2;
    int opcao, posicao, tamanho;

    do {
        printf("\nMenu:\n");
        printf("a. Ler uma string S1\n");
        printf("b. Imprimir o tamanho da string S1\n");
        printf("c. Comparar a string S1 com uma nova string S2\n");
        printf("d. Concatenar a string S1 com uma nova string S2\n");
        printf("e. Imprimir a string S1 de forma reversa\n");
        printf("f. Contar quantas vezes um dado caractere aparece na string S1\n");
        printf("g. Substituir a primeira ocorrência do caractere C1 pelo caractere C2 na string S1\n");
        printf("h. Verificar se a string S2 é uma substring de S1\n");
        printf("i. Retornar uma substring de S1 a partir de uma posição e com um tamanho especificados\n");
        printf("0. Sair do programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 'a':
                lerString(S1);
                break;
            case 'b':
                imprimirTamanhoString(S1);
                break;
            case 'c':
                printf("Digite a nova string S2: ");
                scanf("%s", S2);
                compararStrings(S1, S2);
                break;
            case 'd':
                printf("Digite a nova string S2: ");
                scanf("%s", S2);
                concatenarStrings(S1, S2);
                break;
            case 'e':
                imprimirReverso(S1);
                break;
            case 'f':
                printf("Digite o caractere a ser contado na string S1: ");
                scanf(" %c", &caractere);
                contarCaractere(S1, caractere);
                break;
            case 'g':
                printf("Digite o caractere C1: ");
                scanf(" %c", &C1);
                printf("Digite o caractere C2: ");
                scanf(" %c", &C2);
                substituirCaractere(S1, C1, C2);
                break;
            case 'h':
                printf("Digite a string S2: ");
                scanf("%s", S2);
                verificarSubstring(S1, S2);
                break;
            case 'i':
                printf("Digite a posição de início da substring: ");
                scanf("%d", &posicao);
                printf("Digite o tamanho da substring: ");
                scanf("%d", &tamanho);
                retornarSubstring(S1, posicao, tamanho);
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
