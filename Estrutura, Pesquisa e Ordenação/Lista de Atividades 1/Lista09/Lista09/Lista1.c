#include <stdio.h>
#include <stdlib.h>

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

void imprimir(Nodo *n)
{
	if(n != NULL){		
		printf("%d\n", n->valor);		
	}
}

int main(void) {  	
	Nodo *nodo5 = create(5);
	Nodo *nodo2 = create(2);
	Nodo *nodo1 = create(1);
	Nodo *nodo8 = create(8);
	Nodo *nodo4 = create(4);

    nodo5->esq = nodo2;
    nodo5->dir = nodo8;
    nodo2->esq = nodo1;
    nodo2->dir = nodo4;

    Nodo *nodo10 = create(10);
    nodo8->dir = nodo10;

    printf("EX 2 - valor do nodo4: %d\n", nodo5->esq->dir->valor);

    printf("EX 3 - imprimindo o nodo5: ");
    imprimir(nodo5);
    printf("EX 4 - filho esquerdo do nodo8: ");
    if(nodo8->esq == NULL) {
        printf("Vazio\n");
    }

  	return 0;
}