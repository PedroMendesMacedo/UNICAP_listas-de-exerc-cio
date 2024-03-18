#include <stdio.h>

int main() {
  
  char estadoCivil;

    printf("Por favor, insira seu estado civil (C - Casado, S - Solteiro: ");
    scanf(" %c", &estadoCivil);

    switch(estadoCivil) {
        case 'C':
        case 'c':
            printf("Você é casado(a).\n");
            break;
        case 'S':
        case 's':
            printf("Você é solteiro(a).\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
