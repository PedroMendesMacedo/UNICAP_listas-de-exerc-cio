#include <stdio.h>

#define MAX_CHARS 31
#define NUM_SETORES 100

typedef struct {
    char nome[MAX_CHARS];
    int idade;
    char sexo;
    long long int cpf;
    char data_nascimento[MAX_CHARS];
    int codigo_setor;
    char cargo[MAX_CHARS];
    float salario;
} Funcionario;

int main() {
    Funcionario funcionario;

    printf("Digite o nome do funcionário: ");
    fgets(funcionario.nome, sizeof(funcionario.nome), stdin);
    printf("Digite a idade do funcionário: ");
    scanf("%d", &funcionario.idade);
    printf("Digite o sexo do funcionário (M/F): ");
    scanf(" %c", &funcionario.sexo);
    printf("Digite o CPF do funcionário: ");
    scanf("%lld", &funcionario.cpf);
    printf("Digite a data de nascimento do funcionário: ");
    scanf("%s", funcionario.data_nascimento);
    printf("Digite o código do setor onde trabalha (0-%d): ", NUM_SETORES - 1);
    scanf("%d", &funcionario.codigo_setor);
    printf("Digite o cargo que o funcionário ocupa (até %d caracteres): ", MAX_CHARS - 1);
    scanf("%s", funcionario.cargo);
    printf("Digite o salário do funcionário: ");
    scanf("%f", &funcionario.salario);

    printf("\nDados do funcionário:\n");
    printf("Nome: %s", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Sexo: %c\n", funcionario.sexo);
    printf("CPF: %lld\n", funcionario.cpf);
    printf("Data de nascimento: %s\n", funcionario.data_nascimento);
    printf("Código do setor: %d\n", funcionario.codigo_setor);
    printf("Cargo: %s\n", funcionario.cargo);
    printf("Salário: %.2f\n", funcionario.salario);

    return 0;
}
