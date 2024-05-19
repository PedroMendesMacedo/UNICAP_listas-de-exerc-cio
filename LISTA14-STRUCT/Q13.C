#include <stdio.h>

#define MAX_ELETRODOMESTICOS 5
#define MAX_NOME 16 

typedef struct {
    char nome[MAX_NOME];
    float potencia; // Em kW
    float tempo_ativo_por_dia; 
} Eletrodomestico;

float calcularConsumoTotal(Eletrodomestico eletrodomesticos[], int num_eletrodomesticos, float tempo_em_dias) {
    float consumo_total = 0;
    for (int i = 0; i < num_eletrodomesticos; i++) {
        consumo_total += (eletrodomesticos[i].potencia * eletrodomesticos[i].tempo_ativo_por_dia * tempo_em_dias);
    }
    return consumo_total;
}

int main() {
    Eletrodomestico eletrodomesticos[MAX_ELETRODOMESTICOS];
    float tempo_em_dias;

    printf("Digite os dados dos eletrodomésticos:\n");
    for (int i = 0; i < MAX_ELETRODOMESTICOS; i++) {
        printf("Eletrodoméstico %d\n", i + 1);
        printf("Nome (máximo de 15 letras): ");
        scanf("%s", eletrodomesticos[i].nome);
        printf("Potência (em kW): ");
        scanf("%f", &eletrodomesticos[i].potencia);
        printf("Tempo ativo por dia (em horas): ");
        scanf("%f", &eletrodomesticos[i].tempo_ativo_por_dia);
        printf("\n");
    }

    printf("Digite o tempo em dias: ");
    scanf("%f", &tempo_em_dias);

    float consumo_total = calcularConsumoTotal(eletrodomesticos, MAX_ELETRODOMESTICOS, tempo_em_dias);

    printf("Consumo total da casa em kWh: %.2f\n", consumo_total);

    printf("Consumo relativo de cada eletrodoméstico:\n");
    for (int i = 0; i < MAX_ELETRODOMESTICOS; i++) {
        float consumo_relativo = (eletrodomesticos[i].potencia * eletrodomesticos[i].tempo_ativo_por_dia * tempo_em_dias) / consumo_total * 100;
        printf("Eletrodoméstico %d (%s): %.2f%%\n", i + 1, eletrodomesticos[i].nome, consumo_relativo);
    }

    return 0;
}
