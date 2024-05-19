#include <stdio.h>

typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    Data data;
    Horario horario;
    char descricao[100];
} Compromisso;

void imprimirHorario(Horario h) {
    printf("%02d:%02d:%02d", h.hora, h.minutos, h.segundos);
}

void imprimirData(Data d) {
    printf("%02d/%02d/%04d", d.dia, d.mes, d.ano);
}

void imprimirCompromisso(Compromisso c) {
    printf("Compromisso em ");
    imprimirData(c.data);
    printf(" às ");
    imprimirHorario(c.horario);
    printf(": %s\n", c.descricao);
}

int main() {
    Data data = {19, 5, 2024};
    Horario horario = {14, 30, 0};
    Compromisso compromisso = {data, horario, "Reunião com a equipe"};

    imprimirCompromisso(compromisso);

    return 0;
}
