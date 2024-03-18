#include <stdio.h>

int main(){

	int maior1, maior2;

	printf("Digite um número: ");
	scanf("%d", &maior1);

	printf("Digite um outro número: ");
	scanf("%d", &maior2);

	if (maior1 > maior2) {

	printf("O maior número digitado é %d", maior1);

    	} else {

        printf("O maior número digitado é %d", maior2);

    }
    	return 0;
}
