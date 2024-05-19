#include <stdio.h>

#define NUM_ALUNOS 10

typedef struct {
    int matricula;
    char nome[100];
    int codigo_disciplina;
    float nota1;
    float nota2;
} Aluno;

float calcularMediaPonderada(float nota1, float nota2) {
    return (nota1 * 1.0 + nota2 * 2.0) / 3.0;
}

int main() {
    Aluno alunos[NUM_ALUNOS];

    printf("Digite os dados dos alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Código da Disciplina: ");
        scanf("%d", &alunos[i].codigo_disciplina);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
        printf("\n");
    }

    printf("Lista final dos alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        float media_final = calcularMediaPonderada(alunos[i].nota1, alunos[i].nota2);
        printf("Aluno %d\n", i + 1);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Código da Disciplina: %d\n", alunos[i].codigo_disciplina);
        printf("Média Final: %.2f\n", media_final);
        printf("\n");
    }

    return 0;
}
