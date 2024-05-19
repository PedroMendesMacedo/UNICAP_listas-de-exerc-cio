#include <stdio.h>
#include <string.h>

#define NUM_ALUNOS 5

typedef struct {
    int matricula;
    char nome[100];
    float nota1;
    float nota2;
    float nota3;
} Aluno;

float calcularMedia(float nota1, float nota2, float nota3) {
    return (nota1 + nota2 + nota3) / 3.0;
}

int main() {
    Aluno alunos[NUM_ALUNOS];

    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d\n", i + 1);
        printf("Digite a matricula: ");
        scanf("%d", &alunos[i].matricula);
        getchar(); 

        printf("Digite o nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';  

        printf("Digite a nota da primeira prova: ");
        scanf("%f", &alunos[i].nota1);

        printf("Digite a nota da segunda prova: ");
        scanf("%f", &alunos[i].nota2);

        printf("Digite a nota da terceira prova: ");
        scanf("%f", &alunos[i].nota3);

        printf("\n");
    }

    int indiceMaiorNota1 = 0, indiceMaiorMedia = 0, indiceMenorMedia = 0;
    float maiorMedia = calcularMedia(alunos[0].nota1, alunos[0].nota2, alunos[0].nota3);
    float menorMedia = maiorMedia;

    for (int i = 1; i < NUM_ALUNOS; i++) {
        if (alunos[i].nota1 > alunos[indiceMaiorNota1].nota1) {
            indiceMaiorNota1 = i;
        }

        float media = calcularMedia(alunos[i].nota1, alunos[i].nota2, alunos[i].nota3);
        if (media > maiorMedia) {
            maiorMedia = media;
            indiceMaiorMedia = i;
        }
        if (media < menorMedia) {
            menorMedia = media;
            indiceMenorMedia = i;
        }
    }

    printf("Aluno com a maior nota na primeira prova:\n");
    printf("Matricula: %d\nNome: %s\nNota da primeira prova: %.2f\n\n",
           alunos[indiceMaiorNota1].matricula, alunos[indiceMaiorNota1].nome, alunos[indiceMaiorNota1].nota1);

    printf("Aluno com a maior média geral:\n");
    printf("Matricula: %d\nNome: %s\nMédia geral: %.2f\n\n",
           alunos[indiceMaiorMedia].matricula, alunos[indiceMaiorMedia].nome, maiorMedia);

    printf("Aluno com a menor média geral:\n");
    printf("Matricula: %d\nNome: %s\nMédia geral: %.2f\n\n",
           alunos[indiceMenorMedia].matricula, alunos[indiceMenorMedia].nome, menorMedia);

    for (int i = 0; i < NUM_ALUNOS; i++) {
        float media = calcularMedia(alunos[i].nota1, alunos[i].nota2, alunos[i].nota3);
        printf("Aluno %d\nMatricula: %d\nNome: %s\nMédia geral: %.2f\nStatus: %s\n\n",
               i + 1, alunos[i].matricula, alunos[i].nome, media, (media >= 6.0) ? "Aprovado" : "Reprovado");
    }

    return 0;
}
