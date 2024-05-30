#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTATOS 100

typedef struct {
    char nome[50];
    char telefone[15];
    int dia_aniversario;
    int mes_aniversario;
} Contato;

typedef struct {
    Contato contatos[MAX_CONTATOS];
    int total_contatos;
} Agenda;

void inserir_contato(Agenda *agenda, Contato novo_contato) {
    if (agenda->total_contatos < MAX_CONTATOS) {
        agenda->contatos[agenda->total_contatos] = novo_contato;
        agenda->total_contatos++;
        printf("Contato inserido com sucesso!\n");
    } else {
        printf("Não é possível adicionar mais contatos. Limite excedido.\n");
    }
}

void remover_contato(Agenda *agenda, char nome[]) {
    int i, encontrado = 0;
    for (i = 0; i < agenda->total_contatos; i++) {
        if (strcmp(agenda->contatos[i].nome, nome) == 0) {
            encontrado = 1;
            break;
        }
    }
    if (encontrado) {
        for (; i < agenda->total_contatos - 1; i++) {
            agenda->contatos[i] = agenda->contatos[i + 1];
        }
        agenda->total_contatos--;
        printf("Contato removido com sucesso!\n");
    } else {
        printf("Contato não encontrado.\n");
    }
}

void pesquisar_contato(Agenda agenda, char nome[]) {
    int i, encontrado = 0;
    for (i = 0; i < agenda.total_contatos; i++) {
        if (strcmp(agenda.contatos[i].nome, nome) == 0) {
            encontrado = 1;
            printf("Nome: %s, Telefone: %s, Aniversário: %d/%d\n", 
                   agenda.contatos[i].nome, agenda.contatos[i].telefone,
                   agenda.contatos[i].dia_aniversario, agenda.contatos[i].mes_aniversario);
            break;
        }
    }
    if (!encontrado) {
        printf("Contato não encontrado.\n");
    }
}

void listar_contatos(Agenda agenda) {
    printf("Lista de contatos:\n");
    for (int i = 0; i < agenda.total_contatos; i++) {
        printf("Nome: %s, Telefone: %s, Aniversário: %d/%d\n", 
               agenda.contatos[i].nome, agenda.contatos[i].telefone,
               agenda.contatos[i].dia_aniversario, agenda.contatos[i].mes_aniversario);
    }
}

void listar_contatos_letra(Agenda agenda, char letra) {
    printf("Contatos com nomes começando com '%c':\n", letra);
    for (int i = 0; i < agenda.total_contatos; i++) {
        if (agenda.contatos[i].nome[0] == letra) {
            printf("Nome: %s, Telefone: %s, Aniversário: %d/%d\n", 
                   agenda.contatos[i].nome, agenda.contatos[i].telefone,
                   agenda.contatos[i].dia_aniversario, agenda.contatos[i].mes_aniversario);
        }
    }
}

void imprimir_aniversariantes_mes(Agenda agenda, int mes) {
    printf("Aniversariantes do mês %d:\n", mes);
    for (int i = 0; i < agenda.total_contatos; i++) {
        if (agenda.contatos[i].mes_aniversario == mes) {
            printf("Nome: %s, Telefone: %s, Aniversário: %d/%d\n", 
                   agenda.contatos[i].nome, agenda.contatos[i].telefone,
                   agenda.contatos[i].dia_aniversario, agenda.contatos[i].mes_aniversario);
        }
    }
}

int main() {
    Agenda agenda;
    agenda.total_contatos = 0;

    while (1) {
        printf("\n### Menu ###\n");
        printf("1. Inserir contato\n");
        printf("2. Remover contato\n");
        printf("3. Pesquisar contato pelo nome\n");
        printf("4. Listar todos os contatos\n");
        printf("5. Listar contatos por letra\n");
        printf("6. Imprimir aniversariantes do mês\n");
        printf("7. Sair\n");

        int opcao;
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                Contato novo_contato;
                printf("Nome: ");
                scanf("%s", novo_contato.nome);
                printf("Telefone: ");
                scanf("%s", novo_contato.telefone);
                printf("Dia do aniversário: ");
                scanf("%d", &novo_contato.dia_aniversario);
                printf("Mês do aniversário: ");
                scanf("%d", &novo_contato.mes_aniversario);
                inserir_contato(&agenda, novo_contato);
                break;
            }
            case 2: {
                char nome[50];
                printf("Nome do contato a ser removido: ");
                scanf("%s", nome);
                remover_contato(&agenda, nome);
                break;
            }
            case 3: {
                char nome[50];
                printf("Nome do contato a ser pesquisado: ");
                scanf("%s", nome);
                pesquisar_contato(agenda, nome);
                break;
            }
            case 4:
                listar_contatos(agenda);
                break;
            case 5: {
                char letra;
                printf("Digite a letra inicial dos contatos a serem listados: ");
                scanf(" %c", &letra); 
                listar_contatos_letra(agenda, letra);
                break;
            }
            case 6: {
                int mes;
                printf("Digite o número do mês: ");
                scanf("%d", &mes);
                imprimir_aniversariantes_mes(agenda, mes);
                break;
            }
            case 7:
                printf("Encerrando o programa.\n");
                return 0;
            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }
    }

    return 0;
}
