#include <stdio.h>
#include <stdlib.h>

/*
   1. Ordem exata: A função imprimir original usa o percurso In-order (esquerda-raiz-direita), 
      que em uma Árvore Binária de Busca sempre imprime em ordem crescente. 
      Se adicionarmos 7, 3, 9 após o 4, a saída será: 1, 2, 3, 4, 5, 7, 8, 9.

   2. Mudar o printf: Se movermos o printf para antes da chamada imprimir(n->esq), 
      o percurso muda para Pre-order (raiz-esquerda-direita). Ele imprimiria os nós 
      na exata ordem de "descida" pela árvore, não mais em ordem crescente.

   3. Desenho da árvore (5, 2, 1, 8, 4):
            5
           / \
          2   8
         / \
        1   4

   4. add(raiz, 5): O novo valor 5 seria inserido à DIREITA do 5 original. 
      Isso ocorre porque o código usa "if(valor < n->valor)". Como 5 não é menor 
      que 5, ele cai no "else", que trata valores maiores ou iguais.

   5. Por que testar n->esq == NULL: Isso é necessário para encontrar o espaço vazio 
      onde o novo nó deve ser criado. Se chamássemos add(n->esq, valor) diretamente 
      quando a esquerda fosse nula, tentaríamos acessar n->valor de um nó que 
      não existe, causando um erro fatal (Segmentation Fault) e travando o programa.
  */

struct nodo
{
	int valor;
	struct nodo *esq;
	struct nodo *dir;
};

typedef struct nodo Nodo;

Nodo* create(int valor)
{
	Nodo *n = (Nodo*)malloc(sizeof(Nodo));
	n->valor = valor;
	n->esq = NULL;
	n->dir = NULL;
	return n;
}

void add(Nodo *n, int valor)
{
	if(valor < n->valor)
	{
		if(n->esq == NULL)
			n->esq = create(valor);
		else
			add(n->esq,valor);
	}
	else
	{
		if(n->dir == NULL)
			n->dir = create(valor);
		else
			add(n->dir,valor);
	}
}

void imprimir(Nodo *n)
{
	if(n==NULL) return;		
	imprimir(n->esq);
	printf("%d ",n->valor);
	imprimir(n->dir);
}
void imprimir_decrescente(Nodo *n)
{
    if(n == NULL) return;
    imprimir_decrescente(n->dir);
    printf("%d ", n->valor);
    imprimir_decrescente(n->esq);
}

int existe(Nodo *n, int valor)
{
    if(n == NULL) return 0; 
    
    if(n->valor == valor) return 1; 
    
    if(valor < n->valor)
        return existe(n->esq, valor); 
            else
        return existe(n->dir, valor); 
}

int quantidade_nodos(Nodo *n)
{
    if(n == NULL) return 0;
    
    return 1 + quantidade_nodos(n->esq) + quantidade_nodos(n->dir);
}

int maior_valor(Nodo *n)
{
    if(n == NULL) return -1; 
        if(n->dir == NULL) 
        return n->valor; 
    
    return maior_valor(n->dir); 
}

int soma(Nodo *n)
{
    if(n == NULL) return 0;
    
    return n->valor + soma(n->esq) + soma(n->dir);
}


int main(void) {  	
	Nodo *raiz = create(5);
	add(raiz, 2);
	add(raiz, 1);
	add(raiz, 8);
	add(raiz, 4);
    add(raiz, 7);
    add(raiz, 3);
    add(raiz, 9);

    printf("--- TESTE DAS FUNCOES ---\n\n");

    printf("Original (Crescente): ");
    imprimir(raiz);
    printf("\n");

    printf("Questao 6 (Decrescente): ");
    imprimir_decrescente(raiz);
    printf("\n");

    printf("Questao 7 (Existe o 8?): %s\n", existe(raiz, 8) ? "Sim" : "Nao");
    printf("Questao 7 (Existe o 10?): %s\n", existe(raiz, 10) ? "Sim" : "Nao");

    printf("Questao 8 (Quantidade de nodos): %d\n", quantidade_nodos(raiz));

    printf("Questao 9 (Maior valor): %d\n", maior_valor(raiz));

    printf("Questao 10 (Soma de tudo): %d\n", soma(raiz));

  	return 0;
}