#include <stdio.h>

int main()
{
    char c = 'a';
    char *pc = &c;
    
    
    
    printf("este é o endereço de c: %p \n", &c );
    printf("este é o valor de c: %c \n", c );
    
    printf("o valor que pc armazena: %p \n", *pc );
    printf("valor guardado no endereço apontado por pc: %c \n", *pc);
    
    printf("este é o endereço de pc: %p \n", &pc );



    return 0;
}
