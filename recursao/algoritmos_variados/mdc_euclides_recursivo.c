//Algoritmo de euclides :
//� Baseia - se na seguinte observa��o :
//O m�ximo divisor comum de dois n�meros inteiros x e y, com
//x > y, � o mesmo que o m�ximo divisor comum de y e x% y.
//Um n�mero t divide ambos x e y se, e somente se, t divide
//ambos y e x% y, pois x � igual a x% y mais um m�ltiplo de y.

#include <stdio.h>

int mdc(int x, int y) {
	if (y == 0)
		return x;
	return (mdc(y, x % y));
}

int main() {
	int number1 = 134, number2 = 78;
	printf("MDC %d %d: %d", number1, number2, mdc(number1, number2));

	return 0;
}