#include <stdio.h>

int main() {
    int num1, num2, escolha;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Escolha a operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("Digite o número da operação desejada: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Resultado da Soma: %d\n", num1 + num2);
            break;
        case 2:
            printf("Resultado da Subtração: %d\n", num1 - num2);
            break;
        case 3:
            printf("Resultado da Multiplicação: %d\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Resultado da Divisão: %.2f\n", (float)num1 / num2);
            } else {
                printf("Erro: Divisão por zero não permitida.\n");
            }
            break;
        default:
            printf("Erro: Opção inválida.\n");
    }

    return 0;
}
