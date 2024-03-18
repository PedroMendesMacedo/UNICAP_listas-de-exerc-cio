#include <stdio.h>

int main() {
    
    int a, b;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &b);

    printf("Soma: %d + %d = %d\n", a, b, a+b);

    printf("Diferença: %d - %d = %d\n", a, b, a-b);

    printf("Produto: %d x %d = %d\n", a, b, a*b);

    if (b != 0) {
        printf("Quociente: %d / %d = %d\n", a, b, a/b);
    } else {
        printf("Não é possível dividir por zero.\n");
    }

    return 0;
}
