#include <stdio.h> 
#include <stdlib.h>

int main(){

  char caractere[50]; 
  int valor;

    printf("Digite a sua idade em caractere: "); 
    scanf("%s", caractere);
    valor = atoi(caractere); // função que converte string/char para inteiro 
    printf("Sua idade convertido em inteiro é %d\n", valor);

return 0;

}
