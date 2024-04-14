#include <stdio.h>

#define ALUNOS 5
#define QUESTOES 10

int main() {
    char gabarito[QUESTOES];
    char respostas_alunos[ALUNOS][QUESTOES];
    int resultado[ALUNOS] = {0}; 
    int i, j;

    printf("Digite o gabarito das %d questoes (a, b ou c):\n", QUESTOES);
    for (i = 0; i < QUESTOES; i++) {
        scanf(" %c", &gabarito[i]);
    }

    printf("Digite as respostas dos %d alunos:\n", ALUNOS);
    for (i = 0; i < ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        for (j = 0; j < QUESTOES; j++) {
            scanf(" %c", &respostas_alunos[i][j]);
        }
    }

    for (i = 0; i < ALUNOS; i++) {
        for (j = 0; j < QUESTOES; j++) {
            if (respostas_alunos[i][j] == gabarito[j]) {
                resultado[i]++; 
            }
        }
    }

    printf("\nPontuacao dos alunos:\n");
    for (i = 0; i < ALUNOS; i++) {
        printf("Aluno %d: %d pontos\n", i + 1, resultado[i]);
    }

    return 0;
}
