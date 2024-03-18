#include <stdio.h>

int main(){
    float r, perimetro;

    printf("Digitea o raio da circunferência: ");
    scanf("%f", &r);

    perimetro=r*2*3.141593;
    printf("O perimetro da circunferência é: %.2f", perimetro);

    return 0;
}
