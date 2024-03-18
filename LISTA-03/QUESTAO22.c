#include <stdio.h>
#include <math.h>

int main() {
    
  float numero1, numero2, resto;

    printf("Digite o primeiro número decimal: ");
    scanf("%f", &numero1);

    printf("Digite o segundo número decimal: ");
    scanf("%f", &numero2);

  resto = fmod(numero1, numero2); // retorna o resto da divisão de numero1 por numero2

    printf("O resto da divisão entre %.2f e %.2f é: %.2f\n", numero1, numero2, resto);

    return 0;
}
