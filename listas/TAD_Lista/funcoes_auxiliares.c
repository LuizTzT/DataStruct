#include "funcoes_auxiliares.h"
#include <stdlib.h>
#include <stdio.h>

Lista* inserir(Lista* lista, int element) {
	Lista* novo = (Lista*)malloc(sizeof(Lista));
	novo->info = element;
	novo->next = NULL;

	// Se a lista estiver vazia, o novo nó se torna o primeiro
	if (lista == NULL)
		return novo;
	else {
		Lista* p = lista;

		while (p->next != NULL) {
			p = p->next;
		}

		p->next = novo;

	}
	return lista;
}

void imprimir(Lista* lista) {
	Lista* p = lista;

	if (p == NULL) {
		printf("-> NULL\n");
	}

	while (p != NULL) {
		if (p->next != NULL)
			printf("%d -> ", p->info);
		else
			printf("%d\n", p->info);

		p = p->next;
	}
}

Lista* remover(Lista* lista, int elemento) {
    Lista* prev = NULL; Lista* p = lista;

    while ((p != NULL) && (p->info != elemento)) {
        prev = p;
        p = p->next;
    }

    // sem elementos na lista
    if (p == NULL)
        return lista;
    // apenas um elemento na lista
    if (prev == NULL)
        lista = p->next;
    else
        prev->next = p->next;
    free(p);

    return lista;
}

void liberar(Lista* lista) {
    while (lista != NULL) {
        Lista* aux = lista->next; // salva referência para o próximo nó
        free(lista); // libera a memória para onde a lista está apontando
        lista = aux; // recebe a referência para o próximo nó
    }
}

int soma(Lista* lista) {
	int somaTotal = 0;
	Lista* p = lista;

	while (p != NULL) {
		somaTotal += p->info;
		p = p->next;
	}

	return somaTotal;
}

int maior_elemento(Lista* lista) {
	int maiorElemento = 0;
	Lista* p = lista;

	while (p != NULL) {
		if (p->info > maiorElemento)
			maiorElemento = p->info;
		p = p->next;
	}

	return maiorElemento;
}

int verifica_iguais(Lista* l1, Lista* l2) {
	Lista* p = l1;
	Lista* q = l2;

	while (p != NULL && q != NULL) {

		if (p->info != q->info)
			return 0;

		p = p->next;
		q = q->next;
	}

	return 1;
}