#include <stdio.h>

int main() {
    char estadoCivil;

    printf("Digite o seu estado civil:\n");
    printf("S - Solteiro\n");
    printf("C - Casado\n");
    printf("D - Divorciado\n");
    printf("V - Viúvo\n");
    printf("Escolha a letra correspondente ao seu estado civil: ");
    scanf(" %c", &estadoCivil);

    switch (estadoCivil) {
        case 'S':
        case 's':
            printf("Você é Solteiro.\n");
            break;
        case 'C':
        case 'c':
            printf("Você é Casado.\n");
            break;
        case 'D':
        case 'd':
            printf("Você é Divorciado.\n");
            break;
        case 'V':
        case 'v':
            printf("Você é Viúvo.\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
