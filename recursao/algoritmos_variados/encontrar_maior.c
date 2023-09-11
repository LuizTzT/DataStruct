
#include <stdio.h>
int calcular_maior(int a[], int l, int r) {
	int u, v;
	if (l == r) return(a[l]);
	int m = (l + r) / 2;
	u = calcular_maior(a, l, m);
	v = calcular_maior(a, m + 1, r);
	if (u > v) return(u); else return(v);
}

int main() {
	int v[6] = { 7, 3, 11, 5, 9, 2 };
	size_t tam_v = sizeof(v) / sizeof(v[0]);

	int maior = calcular_maior(v, 0, tam_v);

	printf("%ld\n", tam_v);
	printf("%d\n", maior);
	return 0;
}