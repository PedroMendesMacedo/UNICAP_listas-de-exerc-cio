#include <stdio.h>
#include <string.h>

#define NUM_CARROS 5
#define DISTANCIA 1000

int main() {
    char modelos[NUM_CARROS][50];
    float consumo[NUM_CARROS];
    int i, carro_mais_economico;
    float menor_consumo, litros_consumidos;

    printf("Preencha os modelos de carros e seus consumos:\n");
    for (i = 0; i < NUM_CARROS; i++) {
        printf("Modelo do carro %d: ", i + 1);
        scanf("%s", modelos[i]);
        printf("Consumo (km/l) do carro %d: ", i + 1);
        scanf("%f", &consumo[i]);
    }

    carro_mais_economico = 0;
    menor_consumo = consumo[0];

    for (i = 1; i < NUM_CARROS; i++) {
        if (consumo[i] > 0 && consumo[i] < menor_consumo) {
            menor_consumo = consumo[i];
            carro_mais_economico = i;
        }
    }

    printf("O modelo mais econômico é: %s\n", modelos[carro_mais_economico]);

    printf("Quantidade de litros consumidos para percorrer 1000 km por cada carro:\n");
    for (i = 0; i < NUM_CARROS; i++) {
        if (consumo[i] > 0) {
            litros_consumidos = DISTANCIA / consumo[i];
            printf("%s: %.2f litros\n", modelos[i], litros_consumidos);
        }
    }

    return 0;
}
