#include <stdio.h>

#include <stdio.h>
#include <setjmp.h>

jmp_buf exception_buffer;

void handle_exception() {
    printf("Erro: Entrada inválida. Certifique-se de inserir um número válido.\n");
    longjmp(exception_buffer, 1);
}

int main() {
    float numero;

    if (setjmp(exception_buffer) == 0) {
        printf("Digite um número decimal: ");
        if (scanf("%f", &numero) != 1) {
            handle_exception();
        }

        int arredondado = (int)(numero + 0.5);

        printf("Número arredondado para o inteiro mais próximo: %d\n", arredondado);
    } else {
        return 1;
    }

    return 0;
}
