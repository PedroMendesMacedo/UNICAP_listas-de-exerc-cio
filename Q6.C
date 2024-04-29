#include <stdio.h>

int main()
{
    int n1;

    printf("Digite um número: ");
    scanf("%d", &n1);
    
    if (n1 % 2 == 0){
        printf("O número digitado é par.");
    } else {
        printf("O número é impar.");
    }
   
    

    return 0;
}
