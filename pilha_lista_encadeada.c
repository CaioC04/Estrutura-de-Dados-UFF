#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista {
    int info;
    struct lista *prox;
} TLista;

TLista* push_pilha(TLista* li, int valor) {
    TLista* novo = (TLista*) malloc(sizeof(TLista));
    novo->info = valor;
    novo->prox = li;
    return novo;
}

TLista* pull_pilha(TLista* li) {
    if (li == NULL)
        return NULL;
    TLista* temp = li;
    li = li->prox;
    free(temp);
    return li;
}
