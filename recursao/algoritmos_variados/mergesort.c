#include <stdlib.h>
#include <stdio.h>

void merge(int* a, int l, int m, int r) {
	int i, j, k, * aux;
	aux = (int*)malloc(sizeof(int) * r + 1);

	if (aux != NULL) {
		for (i = m + 1; i > l; i--) aux[i - 1] = a[i - 1];
		for (j = m; j < r; j++) aux[r + m - j] = a[j + 1];

		for (k = l; k <= r; k++) {
			if (aux[j] < aux[i]) a[k] = aux[j--];
			else a[k] = aux[i++];
		}
	}

}

void merge_sort_ordena(int* v, int esq, int dir) {
	if (esq == dir)
		return;

	int meio = (esq + dir) / 2;

	merge_sort_ordena(v, esq, meio);
	merge_sort_ordena(v, meio + 1, dir);
	merge(v, esq, meio, dir);
}

void merge_sort(int* v, int n) {
	merge_sort_ordena(v, 0, n - 1);
}


int main() {
	int* vect;

	vect = (int*)malloc(sizeof(int) * 10);

	if (vect != NULL) {
		for (int i = 0; i < 10; i++) {
			vect[i] = rand() % 100 + 1;
			printf("%04d ", vect[i]);
		}
		merge_sort(vect, 10);
		printf("\n\n\n\n\n");
		for (int i = 0; i < 10; i++) {
			printf("%04d ", vect[i]);
		}
	}
		return 0;
}