#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No{
    int info;
    struct No *esq, *dir;
}TAB;

int altura(TAB* a) {
    if (a == NULL)
        return -1;

    int alt_esq = altura(a->esq);
    int alt_dir = altura(a->dir);

    if (alt_esq > alt_dir)
        return alt_esq + 1;
    else
        return alt_dir + 1;
}

int btree_cheia(TAB* a) {
    if (a == NULL)
        return 1;

    if (a->esq == NULL && a->dir == NULL)
        return 1;

    if (a->esq == NULL || a->dir == NULL)
        return 0;

    if (altura(a->esq) != altura(a->dir))
        return 0;

    return btree_cheia(a->esq) && btree_cheia(a->dir);
}
