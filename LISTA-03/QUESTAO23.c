#include <stdio.h>

int main() {
  
    float numeroDecimal;
    int numeroInteiro;

    printf("Digite um número decimal: ");
    scanf("%f", &numeroDecimal);

    numeroInteiro = (int)numeroDecimal;

    printf("O número inteiro correspondente é: %d\n", numeroInteiro);

    return 0;
}
