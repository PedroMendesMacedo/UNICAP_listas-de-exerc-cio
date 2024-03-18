#include <stdio.h>

int main(){
    float b, h, area;

    printf("Digitea base do triangulo: ");
    scanf("%f", &b);
    printf("Digitea base do triangulo: ");
    scanf("%f", &h);

    area=b*h/2;
    printf("A área do triângulo é: %.2f", area);

    return 0;
}
