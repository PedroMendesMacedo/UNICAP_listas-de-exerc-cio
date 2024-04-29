#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char diaSemana[20];

    printf("Digite o dia da semana (por extenso): ");
    scanf("%s", diaSemana);

    for (int i = 0; i < strlen(diaSemana); i++) {
        diaSemana[i] = tolower(diaSemana[i]);
    }

    if (strcmp(diaSemana, "segunda-feira") == 0 || strcmp(diaSemana, "terça-feira") == 0 ||
        strcmp(diaSemana, "quarta-feira") == 0 || strcmp(diaSemana, "quinta-feira") == 0 ||
        strcmp(diaSemana, "sexta-feira") == 0) {
        printf("%s é um dia útil.\n", diaSemana);
    } else if (strcmp(diaSemana, "sábado") == 0 || strcmp(diaSemana, "domingo") == 0) {
        printf("%s é um fim de semana.\n", diaSemana);
    } else {
        printf("Entrada inválida.\n");
        return 1;
    }

    return 0;
}
