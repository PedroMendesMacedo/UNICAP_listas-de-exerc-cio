#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome1[20], nome2[20];
    int Itamanho, IItamanho;
    
    printf("Digite um nome: ");
    scanf("%s", nome1);
    printf("Digite um outro nome: ");
    scanf("%s", nome2);
    
    Itamanho = strlen(nome1);
    IItamanho = strlen(nome2);
    
    if (Itamanho > IItamanho){
        printf("O nome com mais caracteres é %s", nome1);
    } else {
        printf("O nome com mais caracteres é %s", nome2);
    }

    return 0;
}
