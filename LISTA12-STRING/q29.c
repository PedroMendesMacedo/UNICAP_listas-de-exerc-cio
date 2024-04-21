#include <stdio.h>

int main() {
    char data[11];
    int dia, mes, ano;

    printf("Digite a data no formato DD/MM/AAAA: ");
    scanf("%s", data);

    if (data[2] != '/' || data[5] != '/') {
        printf("Formato de data inválido. As barras devem estar nos lugares corretos.\n");
        return 1; 
    }

    if (sscanf(data, "%d/%d/%d", &dia, &mes, &ano) != 3) {
        printf("Formato de data inválido. Os valores de DD, MM e AAAA devem ser numéricos.\n");
        return 1; 
    }

    if (dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 0) {
        printf("Valores de dia, mês ou ano inválidos.\n");
        return 1; 
    }

    printf("Dia: %d\n", dia);
    printf("Mês: %d\n", mes);
    printf("Ano: %d\n", ano);

    return 0;
}
