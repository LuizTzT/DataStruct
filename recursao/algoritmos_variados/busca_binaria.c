int busca_binaria(int v[], int n, int elem) {
	int l = 0; int r = n - 1; int m = 0;

	while (l <= r) {
		m = (l + r) / 2;
		if (v[m] == elem) return(m);
		else if (v[m] < elem) l = m + 1;
		else if (v[m] > elem) r = m - 1;
	}
	return(-1);
}