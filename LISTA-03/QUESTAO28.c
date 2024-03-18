#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;
    char p[50];
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
    printf("Digite qualquer palavra: ");
    scanf("%s", p);
    
    printf("%s %d", p, n);
  
    
    return 0;
}
