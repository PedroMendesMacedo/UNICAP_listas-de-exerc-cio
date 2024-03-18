#include <stdio.h>

int main(){
    
    int idade, dias, meses;

    printf("Digite quantos anos você tem: ");
    scanf("%d", &idade);
    
    meses=idade*12;
    dias=idade*365;
    
    printf("Você viveu %d meses na sua vida.\n", meses);
    printf("Você viveu %d dias na sua vida.", dias);
    
    return 0;
}
