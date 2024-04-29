#include <stdio.h>

int main() {
    int nota;

    printf("Digite um número inteiro de 1 a 5: ");
    if (scanf("%d", &nota) != 1 || nota < 1 || nota > 5) {
        printf("Erro: Entrada inválida. Certifique-se de inserir um número válido entre 1 e 5.\n");
        return 1;
    }

    switch (nota) {
        case 5:
            printf("Muito bom\n");
            break;
        case 4:
            printf("Bom\n");
            break;
        case 3:
            printf("Regular\n");
            break;
        case 2:
            printf("Insuficiente\n");
            break;
        case 1:
            printf("Muito insuficiente\n");
            break;
        default:
            printf("Erro: Opção inválida.\n");
            return 1;
    }

    return 0;
}
