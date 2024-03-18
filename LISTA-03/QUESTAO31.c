#include <stdio.h>

int main() {
  
    char email[30];

    printf("Digite seu endereço de e-mail: ");
    scanf("%s", email);

    printf("Obrigado %s! Agradecemos por seu endereço de email.\n", email);

    return 0;
}
