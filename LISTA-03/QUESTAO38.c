#include <stdio.h>

int main(){
    
    float reais, cotacao, dolares;

    printf("Digite a quantidade em reais.\n");
    scanf("%f", &reais);
    
    printf("Digite o valor da cotacao.\n");
    scanf("%f", &cotacao);
    
    dolares= reais*cotacao;
    
    printf("O valor em dolares é: %.2f.", dolares);
    
    return 0;
}
