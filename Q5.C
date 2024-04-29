#include <stdio.h>

int main()
{
    int n1, n2;
    
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite um outro número: ");
    scanf("%d", &n2);
    
    if (n1 > n2){
        printf("O maior é número digitado é %d", n1);
    } else if (n1 == n2){
        printf("Os números são iguais.");
    } else {
        printf("O maior número digitado é %d", n2);
    }
    

    return 0;
}
