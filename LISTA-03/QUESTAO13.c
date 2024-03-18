#include <stdio.h> 

int main(){
char caractere[100]; 

printf("Digite uma frase: ");
fgets(caractere, 100, stdin); 


printf("Quantidade de caracteres contidos na frase (considerando espaços): %d", strlen(caractere)); 

  return 0;

}
