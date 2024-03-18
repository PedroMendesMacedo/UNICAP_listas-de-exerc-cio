#include <stdio.h>
#include <stdlib.h>

int main() {
    
  char numeroString[50];
  int numeroInteiro;

    printf("Digite um número inteiro como uma string: ");
    scanf("%s", numeroString);

  numeroInteiro = atoi(numeroString);
  numeroInteiro += 10;

    sprintf(numeroString, "%d", numeroInteiro);
    printf("O número inteiro após somar 10 é: %s\n", numeroString);

    return 0;
}
