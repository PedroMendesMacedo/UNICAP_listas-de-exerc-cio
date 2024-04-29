#include <stdio.h>

int main() {
    int numeroDia;

    printf("Digite um número entre 1 e 7: ");
    if (scanf("%d", &numeroDia) != 1 || numeroDia < 1 || numeroDia > 7) {
        printf("Erro: Entrada inválida. Certifique-se de inserir um número válido entre 1 e 7.\n");
        return 1;
    }

    switch (numeroDia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Erro: Opção inválida.\n");
            return 1;
    }

    return 0;
}
