#include <stdio.h>

#define MAX_CARROS 5
#define MAX_MARCA 16 

typedef struct {
    char marca[MAX_MARCA];
    int ano;
    float preco;
} Carro;

int main() {
    Carro carros[MAX_CARROS];
    float preco_limite;
    int i;

    printf("Digite os dados dos carros:\n");
    for (i = 0; i < MAX_CARROS; i++) {
        printf("Carro %d\n", i + 1);
        printf("Marca (máximo de 15 letras): ");
        scanf("%s", carros[i].marca);
        printf("Ano: ");
        scanf("%d", &carros[i].ano);
        printf("Preço: ");
        scanf("%f", &carros[i].preco);
        printf("\n");
    }

    printf("Digite o preço limite (digite 0 para sair): ");
    scanf("%f", &preco_limite);

    while (preco_limite != 0) {
        printf("Carros com preço menor que %.2f:\n", preco_limite);
        for (i = 0; i < MAX_CARROS; i++) {
            if (carros[i].preco < preco_limite) {
                printf("Marca: %s\n", carros[i].marca);
                printf("Ano: %d\n", carros[i].ano);
                printf("Preço: %.2f\n", carros[i].preco);
                printf("\n");
            }
        }
        printf("Digite o próximo preço limite (digite 0 para sair): ");
        scanf("%f", &preco_limite);
    }

    return 0;
}
