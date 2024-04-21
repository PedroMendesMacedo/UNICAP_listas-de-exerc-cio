#include <stdio.h>

int main() {
    char nome_mercadoria[100];
    float valor_total, valor_desconto, valor_a_vista;

    printf("Digite o nome da mercadoria: ");
    scanf("%[^\n]%*c", nome_mercadoria); 
    printf("Digite o valor total da mercadoria: ");
    scanf("%f", &valor_total);

    valor_desconto = 0.1 * valor_total; 
    valor_a_vista = valor_total - valor_desconto;

    printf("\nNome da mercadoria: %s\n", nome_mercadoria);
    printf("Valor total: R$ %.2f\n", valor_total);
    printf("Valor do desconto: R$ %.2f\n", valor_desconto);
    printf("Valor a ser pago à vista: R$ %.2f\n", valor_a_vista);

    return 0;
}