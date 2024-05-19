#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 5
#define MAX_TITULO 31 
#define MAX_AUTOR 16 

typedef struct {
    char titulo[MAX_TITULO];
    char autor[MAX_AUTOR];
    int ano;
} Livro;

int main() {
    Livro livros[MAX_LIVROS];
    char titulo_busca[MAX_TITULO];
    int i, encontrados = 0;

    printf("Digite os dados dos livros:\n");
    for (i = 0; i < MAX_LIVROS; i++) {
        printf("Livro %d\n", i + 1);
        printf("Título (máximo de 30 letras): ");
        scanf("%s", livros[i].titulo);
        printf("Autor (máximo de 15 letras): ");
        scanf("%s", livros[i].autor);
        printf("Ano: ");
        scanf("%d", &livros[i].ano);
        printf("\n");
    }

    printf("Digite o título do livro que deseja buscar: ");
    scanf("%s", titulo_busca);

    printf("Livros encontrados com o título '%s':\n", titulo_busca);
    for (i = 0; i < MAX_LIVROS; i++) {
        if (strcmp(livros[i].titulo, titulo_busca) == 0) {
            printf("Título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n", livros[i].ano);
            printf("\n");
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum livro encontrado com o título '%s'.\n", titulo_busca);
    }

    return 0;
}
