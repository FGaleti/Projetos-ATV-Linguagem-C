#include <stdio.h>
#include <stdlib.h>

/* 
   1. Se chamarmos rem(raiz, 10) num nó folha: O código executa o bloco de 
      "0 filhos". O ponteiro do pai (ex: pai->dir) passará a ser NULL.

   2. Remover a raiz: Se o código não testar se o "pai == NULL" (já que a 
      raiz não tem pai), ocorrerá um erro fatal. Para funcionar, a função 
      precisa atualizar o ponteiro principal da raiz para o novo topo.

   3. Desenho e substituição: Se o 20 tem apenas o 15 à esquerda e for removido, 
      quem ocupará o lugar do 20 na estrutura do pai será o próprio 15.

   4. Dois filhos: Na teoria correta, o nó é substituído pelo maior valor 
      da subárvore esquerda (predecessor) ou menor da direita (sucessor), 
      e depois esse substituto é removido da sua posição original.

   5. filho == NULL: Significa que a busca chegou ao fim sem sucesso. 
      O código deve avisar que o valor não foi encontrado.

   6. Liberar memória: O comando essencial que falta é o free(filho);

   7. Condição filho != NULL && filho->valor != valor: Serve para o loop 
      continuar descendo na árvore enquanto não chegar num "buraco vazio" 
      E enquanto não encontrar o número desejado.

   8. Conexão de 1 filho à direita: A linha seria "pai->dir = filho->dir;". 
      O pai adota o neto diretamente.

   9. 15 -> 10 (esq) -> 5 (esq), removendo o 10: Na nossa implementação, 
      aparecerá a mensagem de sucesso e o 15 passará a apontar para o 5.

   10. pai->esq == filho e pai->dir == filho: Não, é impossível que ambos 
       sejam verdadeiros. Um nó não pode ser filho esquerdo e direito ao 
       mesmo tempo. O ideal é usar "else if" ou apenas "else".
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
	if(valor < n->valor) {
		if(n->esq == NULL) n->esq = create(valor);
		else add(n->esq,valor);
	} else {
		if(n->dir == NULL) n->dir = create(valor);
		else add(n->dir,valor);
	}
}

void imprimir(Nodo *n)
{
	if(n==NULL) return;		
	imprimir(n->esq);
	printf("%d ",n->valor);
	imprimir(n->dir);
}


Nodo* rem(Nodo *raiz, int valor) {
    Nodo *filho = raiz;
    Nodo *pai = NULL;

    while (filho != NULL && filho->valor != valor) {
        pai = filho;
        if (valor < filho->valor)
            filho = filho->esq;
        else
            filho = filho->dir;
    }

    if (filho == NULL) {
        printf("-> Valor %d nao encontrado na arvore.\n", valor);
        return raiz; 
    }

    if (filho->esq != NULL && filho->dir != NULL) {
        Nodo *sub_pai = filho;
        Nodo *sub_filho = filho->esq;
        
        while (sub_filho->dir != NULL) {
            sub_pai = sub_filho;
            sub_filho = sub_filho->dir;
        }
        
        filho->valor = sub_filho->valor;
        
        filho = sub_filho;
        pai = sub_pai;
    }

    Nodo *neto = NULL;
    if (filho->esq != NULL) neto = filho->esq;
    else neto = filho->dir;

   
    if (pai == NULL) {
        raiz = neto;
    } 
    else {
       
        if (pai->esq == filho) {
            pai->esq = neto; 
        } else {
            pai->dir = neto; 
        }
    }

    printf("-> Nodo com valor %d removido com sucesso!\n", valor);
    free(filho);

    return raiz; 
}


int main(void) {  	
	Nodo *raiz = create(20);
	add(raiz, 10);
	add(raiz, 5);
	add(raiz, 30);
	add(raiz, 25);
    add(raiz, 40);
    
    printf("Arvore original: ");
    imprimir(raiz);
    printf("\n\n");

    raiz = rem(raiz, 99);
    
    raiz = rem(raiz, 10);
    printf("Apos remover o 10: ");
    imprimir(raiz);
    printf("\n\n");

    raiz = rem(raiz, 30);
    printf("Apos remover o 30: ");
    imprimir(raiz);
    printf("\n\n");

    raiz = rem(raiz, 20);
    printf("Apos remover a raiz (20): ");
    imprimir(raiz);
    printf("\n");

  	return 0;
}