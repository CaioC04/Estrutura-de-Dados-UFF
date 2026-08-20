#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No{
    int info;
    struct No *esq, *dir;
}TAB;

void ordem_simetrica(TAB* a) {
    TAB* pilha[100];
    int topo = -1;
    TAB* atual = a;
    while (atual != NULL || topo != -1) {
        while (atual != NULL) {
            pilha[++topo] = atual;
            atual = atual->esq;
        }
        atual = pilha[topo--];
        printf("%d ", atual->info);
        atual = atual->dir;
    }
}