#include <stdio.h>

int main(){
    
    float numero, diferenca;
    int inteiroNUM;

    printf("Digite um numero decimal: ");
    scanf("%f", &numero);
    
    
    inteiroNUM = (int)(numero);
    diferenca=numero-inteiroNUM;
    
    if (diferenca>=0.5){
        inteiroNUM+=1;
        printf("O inteiro mais próximo do número digitado é %i", inteiroNUM);
    }else{
        printf("O inteiro mais próximo do número digitado é %d", inteiroNUM);
    }
    return 0;
}
