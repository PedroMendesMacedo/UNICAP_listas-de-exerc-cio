#include <stdio.h>

int main()
{
    int i = 50;
    float r = 4.65;
    char c = "Pedro";
    
    int *i2 = &i;
    float *r2 = &r;
    char *c2 = &c;
    
    printf("Este é o valor de inteiro:%d \n ", i);
    *i2 = 40;
    printf("Este é o novo valor de inteiro:%d \n ", *i2);
    
    printf("Este é o valor de real:%f \n ", r);    
    *r2 = 3.87;
    printf("Este é o novo valor de real:%f \n ", *r2);
    
    printf("Este é o valor de inteiro:%s \n ", c);    
    *c2 = "Maria";
    printf("Este é o novo valor de inteiro:%s \n ", *c2);
    
    return 0;
}