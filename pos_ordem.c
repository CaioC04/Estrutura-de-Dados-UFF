#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No{
    int info;
    struct No *esq, *dir;
}TAB;

void pos_ordem(TAB* a) {
    TAB* pilha1[100];
    TAB* pilha2[100];
    int topo1 = -1;
    int topo2 = -1;
    
    if (a == NULL)
        return;
    
    pilha1[++topo1] = a;
    
    while (topo1 != -1) {
        TAB* atual = pilha1[topo1--];

        pilha2[++topo2] = atual;

        if (atual->esq != NULL)
            pilha1[++topo1] = atual->esq;

        if (atual->dir != NULL)
            pilha1[++topo1] = atual->dir;
    }

    while (topo2 != -1) {
        TAB* atual = pilha2[topo2--];
        printf("%d ", atual->info);
    }
}