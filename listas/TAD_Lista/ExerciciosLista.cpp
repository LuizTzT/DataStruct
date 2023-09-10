#include <stdio.h>
#include <stdlib.h>
#include "funcoes_auxiliares.h"


int main() {

	Lista* lista1 = NULL;
	Lista* lista2 = NULL;
	int igual = 0;


	lista1 = inserir(lista1, 10);
	lista1 = inserir(lista1, 20);
	lista1 = inserir(lista1, 30);
	lista1 = inserir(lista1, 40);
	lista1 = inserir(lista1, 50);

	printf("Lista atual:\n");
	imprimir(lista1);

	printf("\nSoma total: %d\n", soma(lista1));

	for (int i = 0; i < 25; i++)
		lista1 = inserir(lista1, rand() % 500);

	printf("\nLista atual:\n");
	imprimir(lista1);

	printf("\nSoma total: %d\n", soma(lista1));

	printf("\nMaior elemento: %d\n", maior_elemento(lista1));


	lista2 = inserir(lista2, 10);
	lista2 = inserir(lista2, 20);
	lista2 = inserir(lista2, 30);
	lista2 = inserir(lista2, 40);
	lista2 = inserir(lista2, 50);


	printf("\nConferindo se as listas sao iguais:");
	igual = verifica_iguais(lista1, lista2);

	if (igual)
		printf("\nAs listas sao iguais!");

	return 0;
}