#include <stdio.h>

int main(){
    
    int n1, n2, n3, operacao;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite segundo um numero: ");
    scanf("%d", &n2);
    printf("Digite terceiro um numero: ");
    scanf("%d", &n3);    
    
    operacao = (n1+n2)*n3;
    
    printf("Resultado da operação: %d", operacao);
 
    return 0;
}
