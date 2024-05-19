#include <stdio.h>

#define NUM_ALUNOS 10

typedef struct {
    char nome[100];
    int matricula;
    float media_final;
} Aluno;

int main() {
    Aluno alunos[NUM_ALUNOS];
    Aluno aprovados[NUM_ALUNOS], reprovados[NUM_ALUNOS];
    int num_aprovados = 0, num_reprovados = 0;
    float media_minima_aprovacao = 5.0;

    printf("Digite os dados dos alunos:\n");
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Média Final: ");
        scanf("%f", &alunos[i].media_final);
        printf("\n");
    }

    for (int i = 0; i < NUM_ALUNOS; i++) {
        if (alunos[i].media_final >= media_minima_aprovacao) {
            aprovados[num_aprovados++] = alunos[i];
        } else {
            reprovados[num_reprovados++] = alunos[i];
        }
    }

    printf("Alunos Aprovados:\n");
    for (int i = 0; i < num_aprovados; i++) {
        printf("Nome: %s\n", aprovados[i].nome);
        printf("Matrícula: %d\n", aprovados[i].matricula);
        printf("Média Final: %.2f\n", aprovados[i].media_final);
        printf("\n");
    }

    printf("Alunos Reprovados:\n");
    for (int i = 0; i < num_reprovados; i++) {
        printf("Nome: %s\n", reprovados[i].nome);
        printf("Matrícula: %d\n", reprovados[i].matricula);
        printf("Média Final: %.2f\n", reprovados[i].media_final);
        printf("\n");
    }

    return 0;
}
