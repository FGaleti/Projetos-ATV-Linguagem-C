#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int opcao;
// int prox = 0;
// int sair = 0;

struct tp_produto {
    struct tp_produto *proximo;
    int codigo;
    char nome[100];
    float valor;
};

typedef struct tp_produto Produto;

Produto *primeiroLista = NULL;

void pressioneEnter() {
    printf("Pressione ENTER para continuar...");
    while (getchar() != '\n');
    getchar();
}

// void menu(){
//     printf("CRUD Básico em C\n");
//     printf("1. Cadastrar\n");
//     printf("2. Consultar\n");
//     printf("3. Listar\n");
//     printf("4. Remover\n");
//     printf("5. Sair\n");
//     printf("Escolha uma opção: ");
//     scanf("%d", &opcao);
// }

void addFirst() {
    Produto *novo = (Produto*) malloc(sizeof(Produto));
    printf("\nDigite o código do produto: ");
    scanf("%d", &novo->codigo);
    printf("\nDigite o nome do produto: ");
    scanf("%s", novo->nome);
    printf("\nDigite o valor do produto: ");
    scanf("%f", &novo->valor);

    novo->proximo = primeiroLista;
    primeiroLista = novo;
}

void addLast() {
    Produto *novo = (Produto*) malloc(sizeof(Produto));
    printf("\nDigite o código do produto: ");
    scanf("%d", &novo->codigo);
    printf("\nDigite o nome do produto: ");
    scanf("%s", novo->nome);
    printf("\nDigite o valor do produto: ");
    scanf("%f", &novo->valor);
    novo->proximo = NULL;

    if(primeiroLista == NULL) {
        primeiroLista = novo;
    } else {
        Produto *atual = primeiroLista;
        while (atual->proximo != NULL) {
            atual = atual->proximo;
        }
        atual->proximo = novo;
    }

}

void imprime() {
    const Produto *atual = primeiroLista;
    while (atual != NULL) {
        printf("=========================\n");
        printf("Código: %d\n", atual->codigo);
        printf("Nome: %s\n", atual->nome); 
        printf("Valor: %.2f\n", atual->valor);
        printf("=========================\n");
        atual = atual->proximo;
    }
}

int main() {
    Produto *produtos = (Produto*) malloc(sizeof(Produto) * 100);
    
    addLast();
    imprime();
    addFirst();
    imprime();


    return 0;
}