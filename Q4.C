#include <stdio.h>

int main()
{
    int n;
  
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    
    if (n > 0){
        printf("O número digitado é positivo.");
    } else if (n < 0) {
        printf("O número é negativo.");
    } else {
        printf("O número é igual a zero.");
    }

    return 0;
}
