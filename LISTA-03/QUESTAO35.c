#include <stdio.h>

int main(){
    
    float b, h, perimetro;

    printf("Digitea base do retangulo: ");
    scanf("%f", &b);
    printf("Digitea altura do retangulo: ");
    scanf("%f", &h);

    perimetro=2*(b+h);
    
    printf("O perimetro do retangulo é: %.2f", perimetro);

    return 0;
}
