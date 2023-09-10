#ifndef FUNCOES_AUXILIARES_H
#define FUNCOES_AUXILIARES_H

typedef struct node {
    int info;
    struct node* next;
} Lista;

Lista* inserir(Lista* lista, int elemento);
void imprimir(Lista* lista);
Lista* remover(Lista* lista, int elemento);
void liberar(Lista* lista);
int soma(Lista* lista);
int maior_elemento(Lista* lista);
int verifica_iguais(Lista* l1, Lista* l2);

#endif
