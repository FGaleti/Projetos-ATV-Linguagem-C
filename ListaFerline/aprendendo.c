#include <stdio.h>
#include <string.h> // Para manipular strings

#define TAM_NOME 50

void cadastrar_pessoa(char nome[], int *idade) {
    printf("Digite o nome: ");
    fgets(nome, TAM_NOME, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove a nova linha do final da string

    printf("Digite a idade: ");
    scanf("%d", idade);
}

void imprimir_cadastro(char nome[], int idade) {
    printf("\nCadastro:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
}

int main() {
    char nome[TAM_NOME];
    int idade;

    cadastrar_pessoa(nome, &idade);
    imprimir_cadastro(nome, idade);

    return 0;
}