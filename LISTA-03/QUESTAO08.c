#include <stdio.h> 
#define year_atual 2024

int main(){

int year_nasc, resultado;

  printf("Digite o seu ano de nascimento: "); 
  scanf("%d", &year_nasc);

  resultado = 2024 - year_nasc; 
  printf("Sua idade atual é %d", resultado); 
  
  return 0;
}
