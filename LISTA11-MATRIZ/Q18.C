#include <stdio.h>

#define ALUNOS 5
#define COLUNAS 4

int main() {
    int matriz[ALUNOS][COLUNAS];
    int maior_nota = -1, aluno_maior_nota = -1;
    float media_notas_finais = 0;
    int i, j;

    printf("Digite as informacoes dos %d alunos:\n", ALUNOS);
    for (i = 0; i < ALUNOS; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Numero de matricula: ");
        scanf("%d", &matriz[i][0]);
        printf("Media das provas: ");
        scanf("%d", &matriz[i][1]);
        printf("Media dos trabalhos: ");
        scanf("%d", &matriz[i][2]);

        matriz[i][3] = matriz[i][1] + matriz[i][2];

        if (matriz[i][3] > maior_nota) {
            maior_nota = matriz[i][3];
            aluno_maior_nota = matriz[i][0];
        }

        media_notas_finais += matriz[i][3];
    }

    media_notas_finais /= ALUNOS;

    printf("\nMatricula do aluno com maior nota final: %d\n", aluno_maior_nota);

    printf("Media das notas finais: %.2f\n", media_notas_finais);

    return 0;
}
