#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char naipe;
    char valor;
} Carta;

void distribuirCartas(Carta baralho[], int tamanho_baralho, Carta jogador1[], Carta jogador2[], int qtd_cartas) {
    srand(time(NULL));
    
    for (int i = 0; i < qtd_cartas; i++) {
        jogador1[i] = baralho[rand() % tamanho_baralho];
        jogador2[i] = baralho[rand() % tamanho_baralho];
    }
}

void imprimirCartas(Carta jogador[], int qtd_cartas, int num_jogador) {
    printf("Cartas do Jogador %d:\n", num_jogador);
    for (int i = 0; i < qtd_cartas; i++) {
        printf("Carta %d: %c%c\n", i + 1, jogador[i].valor, jogador[i].naipe);
    }
    printf("\n");
}

int main() {
    Carta baralho[52] = {
        {'C', 'A'}, {'C', '2'}, {'C', '3'}, {'C', '4'}, {'C', '5'}, {'C', '6'}, {'C', '7'}, {'C', '8'}, {'C', '9'}, {'C', 'T'}, {'C', 'J'}, {'C', 'Q'}, {'C', 'K'},
        {'O', 'A'}, {'O', '2'}, {'O', '3'}, {'O', '4'}, {'O', '5'}, {'O', '6'}, {'O', '7'}, {'O', '8'}, {'O', '9'}, {'O', 'T'}, {'O', 'J'}, {'O', 'Q'}, {'O', 'K'},
        {'E', 'A'}, {'E', '2'}, {'E', '3'}, {'E', '4'}, {'E', '5'}, {'E', '6'}, {'E', '7'}, {'E', '8'}, {'E', '9'}, {'E', 'T'}, {'E', 'J'}, {'E', 'Q'}, {'E', 'K'},
        {'P', 'A'}, {'P', '2'}, {'P', '3'}, {'P', '4'}, {'P', '5'}, {'P', '6'}, {'P', '7'}, {'P', '8'}, {'P', '9'}, {'P', 'T'}, {'P', 'J'}, {'P', 'Q'}, {'P', 'K'}
    };

    Carta jogador1[5];
    Carta jogador2[5];

    distribuirCartas(baralho, 52, jogador1, jogador2, 5);

    imprimirCartas(jogador1, 5, 1);
    imprimirCartas(jogador2, 5, 2);

    return 0;
}
