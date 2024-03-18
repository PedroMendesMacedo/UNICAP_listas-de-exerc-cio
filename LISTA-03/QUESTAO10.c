#include <stdio.h>

int main()
{
    int qntdNUM = 1;
    
    printf("Digite uma sequência de caracteres separados por espaços: ");
    
    while(getchar() != '\n'){
        scanf("%*f");
        qntdNUM++;
    }
    
        printf("Foram digitados %d números.\n", qntdNUM);

    return 0;
}
