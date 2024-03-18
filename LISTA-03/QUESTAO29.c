#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char n[50], p[50];
    
    printf("Digite o nome do produto: ");
    scanf("%s", n);
    
    printf("Digite seu o preço: ");
    scanf("%s", p);
    
    printf("O seu produto é: %s e o preço R$ %s", n, p);

    return 0;
}
