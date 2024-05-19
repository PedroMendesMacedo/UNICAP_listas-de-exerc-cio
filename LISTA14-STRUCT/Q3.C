#include <stdio.h>

typedef struct {
    char nome[100];
    int numero_matricula;
    char curso[100];
} Aluno;

int main() {
    Aluno alunos[5];

    for (int i = 0; i < 5; i++) {
        printf("Aluno %d\n", i + 1);
        
        printf("Digite o nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);

        printf("Digite o número de matrícula: ");
        scanf("%d", &alunos[i].numero_matricula);

        while (getchar() != '\n');

        printf("Digite o curso: ");
        fgets(alunos[i].curso, sizeof(alunos[i].curso), stdin);

        printf("\n");
    }

    printf("Dados dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Nome: %s", alunos[i].nome);
        printf("Número de Matrícula: %d\n", alunos[i].numero_matricula);
        printf("Curso: %s", alunos[i].curso);
        printf("\n");
    }

    return 0;
}
