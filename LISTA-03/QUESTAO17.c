#include <stdio.h>

int main(){
    
float peso, altura;
int IMC;
  
      printf("Digite o seu peso: ");
      scanf("%f", &peso);
      printf("Digite a sua altura: ");
      scanf("%f", &altura);
  
IMC = (peso/(altura*altura));
  
     printf("O seu peso é %.2f e sua altura é %.2f\n", peso, altura);
     printf("O seu IMC é %d", IMC);
 
    return 0;
}
