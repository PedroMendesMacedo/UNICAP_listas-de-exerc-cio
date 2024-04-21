#include <stdio.h>

int main() {
    char string[100]; 

    printf("Digite uma string: ");
    scanf("%99s", string); 

    printf("A string que você digitou é: %s\n", string); 

    return 0;
}
