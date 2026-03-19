#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct nodo{
    int valor;
    struct nodo *esq;
    struct nodo *dir;
};
typedef struct nodo Nodo;
Nodo* create(int valor){
    Nodo *n = malloc(sizeof(Nodo));
    n -> valor = valor;
    n ->esq = NULL;
    n ->dir = NULL;
    return n;
}
void imprimirNodo(Nodo *n){
       if(n != NULL){
        printf("%d ", n -> valor);
        imprimirNodo(n -> esq);
        imprimirNodo(n -> dir);
    }
}
void removerNodo(Nodo *n, int valor){
    Nodo *filho = n;
    Nodo *pai;
    do{
        pai = filho;
        if(valor < filho -> valor){
            filho = filho -> esq;
        }else{
            filho = filho -> dir;
        }
    }while(filho != NULL && filho -> valor != valor);

    if(filho != NULL){
        if(filho -> esq == NULL && filho -> dir == NULL){
            if(pai -> esq == filho){
                pai -> esq = NULL;
            }else(pai -> dir == filho){
                pai -> dir = NULL;
            }
            if(filhor -> esq == NULL && filho -> dir != NULL){
                if(pai -> esq == filho){
                    pai -> esq = filho -> esq;
                }if( pai -> dir == filho){
                    pai -> dir = filho -> esq;
                }
            
    }
    


main(){
    Nodo *nodo5 = create(5);
    Nodo *nodo2 = create(2);
    Nodo *nodo1 = create(1);
    Nodo *nodo8 = create(8);
    Nodo *nodo4 = create(4);
    Nodo *nodo10 = create(10);
    nodo5 -> esq = nodo2;
    nodo5 -> dir = nodo8;
    nodo2 -> esq = nodo1;
    nodo2 -> dir = nodo4;
    nodo8 -> dir = nodo10;
    printf("valor do nodo raiz: %d\n", nodo5 -> esq -> dir -> valor);
    printf("impressão da árvore: ");
    imprimirNodo(nodo5);

        return n;
}

