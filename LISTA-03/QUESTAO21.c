#include <stdio.h>
#include <string.h>

int main() {
  
    char cidade[100];

    printf("Digite o nome da sua cidade: ");
    scanf("%s", cidade); 

    
    if (cidade[0] == 'S' || cidade[0] == 's') {
        printf("O nome da sua cidade começa com 'S'.\n");
    } else {
        printf("O nome da sua cidade não começa com 'S'.\n");
    }

    return 0;
}
