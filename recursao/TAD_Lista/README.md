**[Exercícios anteriores](../../listas/TAD_Lista/)**

4 - Resolva todos os exercícios anteriores de forma recursiva. Os protótipos devem permanecer os mesmos.

```c
int soma_recursiva(Lista* lista) {
	if (lista == NULL)
		return 0;
	else
		return lista->info + somaRecursiva(lista->next);
}
```
```c
int maior_elemento_recursiva(Lista* lista) {
	if (lista == NULL)
		return 0;

	int maiorAtual = lista->info;
	int maiorRestante = maior_elemento_recursiva(lista->next);

	if (maiorAtual > maiorRestante)
		return maiorAtual;
	return maiorRestante;
}
```

```c
int verifica_iguais_recursiva(Lista* l1, Lista* l2) {

	// Caso base: ambas as listas estejam vazias, são iguais.
	if (l1 == NULL && l2 == NULL)
		return 1;

	// Caso base: somente uma das listas está vazia, são diferentes.
	if (l1 == NULL || l2 == NULL)
		return 0;

	if (l1->info == l2->info)
		return verifica_iguais_recursiva(l1->next, l2->next);

	return 0; // listas são diferentes
}
```

---

### 5 - Quais as vantagens e desvantagens de representar um grupo de itens como um vetor versus uma lista ligada (tad lista)?


### Vantagens e Desvantagens de Vetores (Arrays):

#### Vantagens:

* Acesso direto: Você pode acessar elementos em um vetor diretamente usando índices, o que resulta em tempos de acesso muito rápidos (O(1)).

* Acesso aleatório: Os vetores são ideais para acesso aleatório, o que significa que você pode acessar qualquer elemento diretamente, independentemente da posição.

* Ocupam menos espaço de memória: Em geral, vetores usam menos espaço de memória do que listas ligadas, pois não há sobrecarga associada à estrutura de dados (apenas os elementos).

#### Desvantagens:

* Tamanho fixo: Os vetores têm um tamanho fixo, o que significa que você precisa definir o tamanho máximo com antecedência e não podem crescer dinamicamente. Isso pode ser inconveniente quando você não sabe com antecedência quantos elementos precisa armazenar.

* Inserções/remoções ineficientes: Inserir ou remover elementos no meio de um vetor requer deslocar todos os elementos subsequentes, tornando essas operações ineficientes (O(n)).

### Vantagens e Desvantagens de Listas Ligadas:

#### Vantagens:

* Tamanho dinâmico: Listas ligadas podem crescer ou encolher dinamicamente, alocando ou liberando memória conforme necessário. Isso é útil quando você não sabe o tamanho exato da coleção antecipadamente.

* Inserções/remoções eficientes: Inserir ou remover elementos em uma lista ligada é eficiente (O(1)) quando você está trabalhando no início ou no final da lista. Isso faz delas uma escolha sólida para implementações de filas e pilhas.

#### Desvantagens:

* Acesso lento: O acesso direto a elementos em uma lista ligada é lento (O(n)), pois você deve percorrer a lista sequencialmente para encontrar um elemento específico.

* Uso de memória extra: Listas ligadas usam mais memória do que vetores devido à sobrecarga associada aos nós.

---

### 6 - Qual o número médio de nós acessados ao procurar determinado elemento numa lista desordenada? E numa lista ordenada? E num vetor desordenado? E num vetor ordenado?

#### Número Médio de Nós Acessados ao Procurar um Elemento:

* Lista Desordenada: Em média, você precisará percorrer metade da lista (n/2) para encontrar um elemento, onde n é o número de elementos na lista.

* Lista Ordenada: Em média, você precisará percorrer aproximadamente um quarto da lista (n/4) para encontrar um elemento. Isso ocorre porque você pode usar uma busca binária em uma lista ordenada.

* Vetor Desordenado: Em média, você precisará percorrer metade do vetor (n/2) para encontrar um elemento, da mesma forma que uma lista desordenada.

* Vetor Ordenado: Em média, você também precisará percorrer aproximadamente um quarto do vetor (n/4) para encontrar um elemento, porque você pode usar uma busca binária.