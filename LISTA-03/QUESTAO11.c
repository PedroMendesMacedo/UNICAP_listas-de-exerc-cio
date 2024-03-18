#include <stdio.h>
 
int main()
{
    char animal[50];
    printf("Digite o nome de um animal qualquer: ");
    gets(animal);
    printf("Nome do animal digitado é: %s", animal);
 
    return 0;
}
