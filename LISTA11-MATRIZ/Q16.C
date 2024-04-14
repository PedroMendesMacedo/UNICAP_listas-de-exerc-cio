#include <stdio.h>

#define ALUNOS 10
#define PROVAS 3

int main() {
    int notas[ALUNOS][PROVAS];
    int pior_nota_prova1 = 101, pior_nota_prova2 = 101, pior_nota_prova3 = 101;
    int alunos_pior_nota_prova1 = 0, alunos_pior_nota_prova2 = 0, alunos_pior_nota_prova3 = 0;
    int i, j;

    printf("Digite as notas dos %d alunos em %d provas:\n", ALUNOS, PROVAS);
    for (i = 0; i < ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        for (j = 0; j < PROVAS; j++) {
            scanf("%d", &notas[i][j]);
        }
    }

    for (i = 0; i < ALUNOS; i++) {
        if (notas[i][0] < pior_nota_prova1) {
            pior_nota_prova1 = notas[i][0];
            alunos_pior_nota_prova1 = 1;
        } else if (notas[i][0] == pior_nota_prova1) {
            alunos_pior_nota_prova1++;
        }

        if (notas[i][1] < pior_nota_prova2) {
            pior_nota_prova2 = notas[i][1];
            alunos_pior_nota_prova2 = 1;
        } else if (notas[i][1] == pior_nota_prova2) {
            alunos_pior_nota_prova2++;
        }

        if (notas[i][2] < pior_nota_prova3) {
            pior_nota_prova3 = notas[i][2];
            alunos_pior_nota_prova3 = 1;
        } else if (notas[i][2] == pior_nota_prova3) {
            alunos_pior_nota_prova3++;
        }
    }

    printf("\nNumero de alunos cuja pior nota foi na prova 1: %d\n", alunos_pior_nota_prova1);
    printf("Numero de alunos cuja pior nota foi na prova 2: %d\n", alunos_pior_nota_prova2);
    printf("Numero de alunos cuja pior nota foi na prova 3: %d\n", alunos_pior_nota_prova3);

    return 0;
}
