#include <stdio.h> 

int main(){
  
  int num1; 
  float corrige;
  
  printf("Digite um número inteiro: "); 
  scanf("%d", &num1);
  corrige = (float)(num1);

  printf("O número convertido para decimal é %.2f", corrige); 
  
  return 0;
}
