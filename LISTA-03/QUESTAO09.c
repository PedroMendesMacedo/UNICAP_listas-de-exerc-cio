#include <stdio.h> 

int main(){

  char nome[50], sobrenome[50];

  printf("Digite o seu nome: "); 
  scanf("%s", &nome);
  printf("Digite o seu sobrenome: "); 
  scanf("%s", &sobrenome); 
  printf("%s %s", nome, sobrenome);

return 0;

}
