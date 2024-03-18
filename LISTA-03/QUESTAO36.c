#include <stdio.h>

int main(){
    
    float num1, num2, num3, media;

    printf("Digite um número: ");
    scanf("%f", &num1);
    printf("Digite um segundo número: ");
    scanf("%f", &num2);
    printf("Digite um terceiro número: ");
    scanf("%f", &num3);
    
    media = (num1+num2+num3)/3;
    
    printf("A média é: %.2f", media);

    return 0;
}
