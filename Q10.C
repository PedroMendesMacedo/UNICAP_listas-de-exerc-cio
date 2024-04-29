#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite um outro número: ");
    scanf("%d", &n2);
    printf("Digite mais um número: ");
    scanf("%d", &n3);
 
    if (n1 >= n2 && n1 >= n3){
        if(n2>n3){
            printf("%i, %i, %i", n3, n2, n1);
        }else{
            printf("%i, %i, %i", n2, n3, n1);
        }
    }else if (n2 > n1 && n2 > n3){
        if(n1>n3){
            printf("%i, %i, %i", n3, n1, n2);
        }else{
            printf("%i, %i, %i", n1, n3, n2);
        }
    }else{
        if(n1>n2){
            printf("%i, %i, %i", n2, n1, n3);
        }else{
            printf("%i, %i, %i", n1, n2, n3);    
        }
    }
    return 0;
}
