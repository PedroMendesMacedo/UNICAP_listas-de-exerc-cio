#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 5
#define TAM_NOME 50

int main() {
    char alunos[MAX_ALUNOS][TAM_NOME];
    char nome[TAM_NOME];
    int num_alunos = 0;
    int i;

    do {
        if (num_alunos >= MAX_ALUNOS) {
            printf("Limite máximo de alunos atingido.\n");
            break;
        }

        printf("Digite o nome do aluno %d: ", num_alunos + 1);
        scanf("%s", alunos[num_alunos]);

        num_alunos++;

        printf("Deseja inserir mais um nome? (s/n): ");
        char resposta;
        scanf(" %c", &resposta);
        if (resposta != 's' && resposta != 'S') {
            break;
        }
    } while (1);

    printf("Digite o nome que deseja verificar: ");
    scanf("%s", nome);

    int encontrado = 0;
    for (i = 0; i < num_alunos; i++) {
        if (strstr(alunos[i], nome) != NULL) {
            printf("Nome encontrado: %s (índice: %d)\n", alunos[i], i);
            encontrado = 1;
        }
    }

    if (!encontrado) {
        printf("Nome não encontrado na lista.\n");
    }

    return 0;
}
