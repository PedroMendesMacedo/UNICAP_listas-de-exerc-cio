#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char caractere;
    
    printf("Digite um caractere qualquer: ");
    scanf("%c", &caractere);
    
    caractere = toupper(caractere); // função usada para o alfabeto de minusculas para maiusculas.
    
    if(caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U'){
        printf("Vogal.");
    } else {
        printf("Consoante.");
    }
    
    return 0;
}
