int busca_binaria_recursiva(int v[], int n, int elem, int l, int r) {
	int m = (l + r) / 2;
	if (l > r)
		return(-1);
	if (v[m] == elem)
		return(m);
	else if (v[m] < elem)
		return(busca_binaria_recursiva(v, n, elem, m + 1, r));
	else if (v[m] > elem)
		return(busca_binaria_recursiva(v, n, elem, l, m - 1));
}