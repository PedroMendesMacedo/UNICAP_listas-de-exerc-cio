#include <stdio.h>

float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

void classificarIMC(float imc) {
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 24.9) {
        printf("Peso normal\n");
    } else if (imc < 29.9) {
        printf("Sobrepeso\n");
    } else if (imc < 34.9) {
        printf("Obeso\n");
    } else {
        printf("Muito obeso\n");
    }
}

int main() {
    float peso, altura;

    printf("Digite o peso em kg: ");
    scanf("%f", &peso);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    float imc = calcularIMC(peso, altura);

    printf("O IMC é: %.2f\n", imc);
    printf("A pessoa está classificada como: ");
    classificarIMC(imc);

    return 0;
}
