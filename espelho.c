#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No{
    int info;
    struct No *esq, *dir;
}TAB;
    
void espelho(TAB *a) {
    if (a == NULL)
        return;

    TAB *aux = a->esq;
    a->esq = a->dir;
    a->dir = aux;

    espelho(a->esq);
    espelho(a->dir);
}