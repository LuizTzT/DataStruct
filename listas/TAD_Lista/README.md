```c
typedef struct node {
  int info;
  struct node* next;
} Lista;
```
---

1 - Escreva uma função que retorna a soma de todos os elementos de uma lista encadeada. O protótipo da função é dado por:

```c
int soma (Lista *lista);
```

Insira números aleatórios na lista. O código a seguir insere 25 números aleatórios (maiores que 0 e menores que 500) em uma lista.

```c

for (i = 0; i < 25; i++) {
  lista = inserir (lista, rand()%500);
}
```
---

2 - Escreva uma função que retorna o maior elemento de uma lista encadeada. O protótipo da função é dado por:

```c
int maior_elemento (Lista *lista);
```

Obs.: Use a mesma entrada aleatória do exercício 1.

---

3 - Escreva uma função que verifica se duas listas dadas são iguais, ou seja, se têm o mesmo conteúdo. O protótipo da função é dado por:

```c
int verifica_iguais (Lista *l1, Lista *l2);
```
