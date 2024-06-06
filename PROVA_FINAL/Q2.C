#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "produtos.txt"

struct Produto {
    int id;
    char nome[50];
    float preco;
    int quantidade;
};

void adicionarProduto();
void listarProdutos();
void buscarProduto();
void atualizarProduto();
void removerProduto();
void menu();

int main() {
    menu();
    return 0;
}

void adicionarProduto() {
    struct Produto produto;
    char escolha;
    FILE *file;

    printf("Digite o ID do produto: ");
    scanf("%d", &produto.id);
    printf("Digite o nome do produto: ");
    scanf("%s", produto.nome);
    printf("Digite o preço do produto: ");
    scanf("%f", &produto.preco);
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &produto.quantidade);

    printf("Deseja adicionar o registro no início (I) ou no final (F) do arquivo? ");
    scanf(" %c", &escolha);

    if (escolha == 'I' || escolha == 'i') {  // Se a escolha for "início"
        file = fopen(FILE_NAME, "r+");  // Abre o arquivo para leitura e escrita, não cria um novo arquivo.
        if (file == NULL) {             // Se o arquivo não existe, cria um novo.
            file = fopen(FILE_NAME, "w");
        }
fseek(file, 0, SEEK_END);       // Move o ponteiro do arquivo para o final.
        long tamanho = ftell(file);     // Obtém o tamanho do arquivo.
        char *buffer = (char*)malloc(tamanho);  // Aloca memória suficiente para armazenar o conteúdo do arquivo.
        rewind(file);                   // Move o ponteiro do arquivo de volta para o início.
        fread(buffer, 1, tamanho, file); // Lê o conteúdo do arquivo para o buffer.
        rewind(file);                   // Move o ponteiro do arquivo de volta para o início novamente.
        fwrite(&produto, sizeof(struct Produto), 1, file);  // Escreve o novo produto no início do arquivo.
        fwrite(buffer, 1, tamanho, file);  // Escreve o conteúdo original do arquivo após o novo produto.
        free(buffer);                      // Libera a memória alocada para o buffer.
    } else {  // Se a escolha for "final"
        file = fopen(FILE_NAME, "a");  // Abre o arquivo para escrita no final, cria um novo arquivo se não existir.
        if (file == NULL) {            // Verifica se o arquivo foi aberto com sucesso.
            file = fopen(FILE_NAME, "w");  // Se não, cria um novo arquivo.
        }
        fwrite(&produto, sizeof(struct Produto), 1, file);  // Escreve o novo produto no final do arquivo.
    }
    fclose(file);  // Fecha o arquivo.

    printf("Produto adicionado com sucesso!\n");
}

void listarProdutos() {
    struct Produto produto;  
    FILE *file = fopen(FILE_NAME, "r");  // Abre o arquivo para leitura.
    if (!file) {  // Verifica se o arquivo foi aberto com sucesso.
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int opcao; 
    int count = 0;  // Contador para iterar sobre os produtos.
    fseek(file, 0, SEEK_END);  // Move o ponteiro do arquivo para o final.
    long fileSize = ftell(file);  // Obtém o tamanho do arquivo.
    int totalProdutos = fileSize / sizeof(struct Produto);  // Calcula o número total de produtos no arquivo.
    rewind(file);  // Move o ponteiro do arquivo de volta para o início.

    printf("Escolha o tipo de visualização:\n");
    printf("1. Os 5 primeiros registros\n");
    printf("2. Os 5 últimos registros\n");
    printf("3. Todos os registros\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {  // Se a opção for listar os 5 primeiros registros.
        while (fread(&produto, sizeof(struct Produto), 1, file) && count < 5) {
            printf("ID: %d, Nome: %s, Preço: %.2f, Quantidade: %d\n", produto.id, produto.nome, produto.preco, produto.quantidade);
            count++;
        }
    } else if (opcao == 2) {  // Se a opção for listar os 5 últimos registros.
        fseek(file, -5 * sizeof(struct Produto), SEEK_END);  // Move o ponteiro para o quinto produto a partir do final.
        while (fread(&produto, sizeof(struct Produto), 1, file)) {
            printf("ID: %d, Nome: %s, Preço: %.2f, Quantidade: %d\n", produto.id, produto.nome, produto.preco, produto.quantidade);
        }
    } else if (opcao == 3) {  // Se a opção for listar todos os registros.
        while (fread(&produto, sizeof(struct Produto), 1, file)) {
            printf("ID: %d, Nome: %s, Preço: %.2f, Quantidade: %d\n", produto.id, produto.nome, produto.preco, produto.quantidade);
        }
    } else {  // Se a opção for inválida.
        printf("Opção inválida.\n");
    }

    fclose(file);  // Fecha o arquivo.
}

void buscarProduto() {
    struct Produto produto; 
    int id;  // Variável para armazenar o ID do produto a ser buscado.
    int encontrado = 0;  // Flag para verificar se o produto foi encontrado.
    FILE *file = fopen(FILE_NAME, "r");  // Abre o arquivo para leitura.
    if (!file) {  // Verifica se o arquivo foi aberto com sucesso.
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("Digite o ID do produto que deseja buscar: ");
    scanf("%d", &id);

    while (fread(&produto, sizeof(struct Produto), 1, file)) {  // Lê o arquivo produto por produto.
        if (produto.id == id) {  // Verifica se o ID do produto lido corresponde ao ID buscado.
            printf("Produto encontrado: ID: %d, Nome: %s, Preço: %.2f, Quantidade: %d\n", produto.id, produto.nome, produto.preco, produto.quantidade);
            encontrado = 1;  // Marca que o produto foi encontrado.
            break;  // Sai do loop.
        }
    }

    if (!encontrado) {  
        printf("Produto com ID %d não encontrado.\n", id);
    }

    fclose(file);  
}

void atualizarProduto() {
    struct Produto produto;  
    int id;  // Variável para armazenar o ID do produto a ser atualizado.
    int encontrado = 0;  // Flag para verificar se o produto foi encontrado.
    FILE *file = fopen(FILE_NAME, "r+");  // Abre o arquivo para leitura e escrita.
    if (!file) {  // Verifica se o arquivo foi aberto com sucesso.
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("Digite o ID do produto que deseja atualizar: ");
    scanf("%d", &id);

    while (fread(&produto, sizeof(struct Produto), 1, file)) {  // Lê o arquivo produto por produto.
        if (produto.id == id) {  // Verifica se o ID do produto lido corresponde ao ID buscado.
            printf("Produto encontrado: ID: %d, Nome: %s, Preço: %.2f, Quantidade: %d\n", produto.id, produto.nome, produto.preco, produto.quantidade);
            // Coleta das novas informações do produto.
            printf("Digite o novo nome do produto: ");
            scanf("%s", produto.nome);
            printf("Digite o novo preço do produto: ");
            scanf("%f", &produto.preco);
            printf("Digite a nova quantidade em estoque: ");
            scanf("%d", &produto.quantidade);
            fseek(file, -sizeof(struct Produto), SEEK_CUR);  // Move o ponteiro do arquivo de volta ao início do produto lido.
            fwrite(&produto, sizeof(struct Produto), 1, file);  // Reescreve o produto atualizado no arquivo.
            printf("Produto atualizado com sucesso!\n");
            encontrado = 1;  // Marca que o produto foi encontrado e atualizado.
            break;  // Sai do loop.
        }
    }

    if (!encontrado) {  // Se o produto não foi encontrado.
        printf("Produto com ID %d não encontrado.\n", id);
    }

    fclose(file);  // Fecha o arquivo.
}

void removerProduto() {
    struct Produto produto;  
    int id;  // Variável para armazenar o ID do produto a ser removido.
    int encontrado = 0;  // Flag para verificar se o produto foi encontrado.
    FILE *file = fopen(FILE_NAME, "r");  // Abre o arquivo original para leitura.
    FILE *tempFile = fopen("temp.txt", "w");  // Abre um arquivo temporário para escrita.
    if (!file || !tempFile) {  // Verifica se os arquivos foram abertos com sucesso.
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("Digite o ID do produto que deseja remover: ");
    scanf("%d", &id);

    while (fread(&produto, sizeof(struct Produto), 1, file)) {  // Lê o arquivo original produto por produto.
        if (produto.id != id) {  // Escreve no arquivo temporário apenas os produtos cujo ID não corresponde ao ID a ser removido.
            fwrite(&produto, sizeof(struct Produto), 1, tempFile);
        } else {
            encontrado = 1;  // Marca que o produto foi encontrado e removido.
        }
    }

    fclose(file);  // Fecha o arquivo original.
    fclose(tempFile);  // Fecha o arquivo temporário.

    remove(FILE_NAME);  // Remove o arquivo original.
    rename("temp.txt", FILE_NAME);  // Renomeia o arquivo temporário para o nome do arquivo original.

    if (encontrado) {  // Se o produto foi encontrado e removido.
        printf("Produto removido com sucesso!\n");
    } else {  // Se o produto não foi encontrado.
        printf("Produto com ID %d não encontrado.\n", id);
    }
}

void menu() {
    int opcao;  

    do {
        // Exibe o menu de opções ao usuário.
        printf("\nMenu:\n");
        printf("1. Adicionar produto\n");
        printf("2. Listar produtos\n");
        printf("3. Buscar produto\n");
        printf("4. Atualizar produto\n");
        printf("5. Remover produto\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        // Chama a função correspondente com base na escolha do usuário.
        switch(opcao) {
            case 1:
                adicionarProduto();
                break;
            case 2:
                listarProdutos();
                break;
            case 3:
                buscarProduto();
                break;
            case 4:
                atualizarProduto();
                break;
            case 5:
                removerProduto();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while(opcao != 0);  // Continua exibindo o menu até que o usuário escolha sair (opção 0).
}

