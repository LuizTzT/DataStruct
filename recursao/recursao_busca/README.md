Código para adicionar 1.000.000 de elementos no vetor de forma ordenada:

```c
int vect_tam = 1000000;
int* vect = (int*)malloc(vect_tam * sizeof(int));
int element = 950000;

if (vect == NULL) {
	printf("Falha na alocação de memoria!");
	return 1;
}

for (int i = 1; i <= vect_tam; i++) {
	vect[i - 1] = i;
}

// Código

free(vect);

```


1 - Implemente o algoritmo de busca sequencial e realize buscas em um vetor ordenado de inteiros com 1.000.000 elementos.

```c
int busca_sequencial_implementacao(int* v, int tam_v, int element) {
	for (int i = 0; i < tam_v; i++)
		if (v[i] == element)
			return i;
	return -1;
}


int main(){

	int posicao = busca_sequencial_implementacao(vect, vect_tam, element);

	if (posicao != -1)
		printf("EX1 - Valor encontrado na posicao %d\n", posicao);
    // 949999
  return 0;
}
```

2 - Implemente o algoritmo de busca binária (iterativo) e realize buscas em um vetor ordenado de inteiros com 1.000.000 elementos. Protótipo:


```c
int Busca (int V[], int n, int elem);
```

```c
int busca(int v[], int tam_v, int element) {
	int l = 0, k = tam_v - 1, m = 0;

	while (l <= k) {
		m = (l + k) / 2;
		if (v[m] == element) return m;
		else if (v[m] < element) l = m + 1;
		else if (v[m] > element) k = m - 1;
	}
	return -1;
}

int main(){
	// EX2
	posicao = busca(vect, vect_tam, element);

	if (posicao != -1)
		printf("EX2 - valor encontrado na posicao %d\n", posicao);
  return 0;
}

```


3 - Implemente o algoritmo de busca binária (recursivo) e realize buscas em um vetor ordenado de inteiros com 1.000.000 elementos.


```c
int busca_recursiva(int v[], int l, int k, int element) {
	int m = (l + k) / 2;

	if (l > k)
		return -1;

	if (v[m] == element)
		return m;
	else if (v[m] < element)
		return busca_recursiva(v, m + 1, k, element);
	else if (v[m] > element)
		return busca_recursiva(v, l, m - 1, element);
}

int main(){
  	if (posicao != -1)
		printf("EX3 - Valor encontrado na posicao %d\n", posicao);
}

```

4 - Qual a vantagem do algoritmo de busca sequencial sobre o algoritmo de busca binária?

```
Vantagens do algoritmo de busca sequencial:

Simplicidade: A busca sequencial é muito simples de implementar e entender. É um algoritmo direto que percorre a lista de elementos um por um até encontrar o elemento desejado.

Não requer ordenação: A busca sequencial funciona em listas não ordenadas e em listas ordenadas. Você não precisa pré-ordenar a lista antes de realizar a busca.

Uso eficaz em pequenos conjuntos de dados: Em pequenos conjuntos de dados, a busca sequencial pode ser tão eficiente quanto outras técnicas de busca, pois a sobrecarga de ordenação e divisão não é significativa.
```

5 - Qual a vantagem do algoritmo de busca binária sobre o algoritmo de busca sequencial?

```
Vantagens do algoritmo de busca binária:

Eficiência em listas ordenadas: A busca binária é extremamente eficiente em listas ordenadas, pois reduz pela metade o espaço de busca a cada comparação. Isso resulta em um tempo de busca O(log n), onde n é o número de elementos.

Melhor desempenho em grandes conjuntos de dados: Em listas longas, a busca binária é muito mais eficiente do que a busca sequencial, especialmente quando a lista está ordenada. O número de comparações necessárias é significativamente menor.

Desempenho previsível: A busca binária garante que, em cada etapa, a lista seja dividida ao meio, o que proporciona um desempenho previsível e consistente.
```