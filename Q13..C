#include <stdio.h>


int main()
{
    float salario, aumento, total;
    
    printf("Digite o valor do seu salário: ");
    scanf("%f", &salario);
    fflush(stdin);
    
    if(salario > 1.500){
        aumento = (salario * 0.10);
    } else {
        aumento = (salario * 0.15);
    }
    
    total = (salario + aumento);
    
    printf("O seu salário atual é R$ %.2f. \nO seu aumento é de R$ %.2f. \nSeu novo salário é: R$ %.2f", salario, aumento, total);

    return 0;
}
