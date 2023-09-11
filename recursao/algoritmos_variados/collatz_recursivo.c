#include <stdio.h>

int collatz(int n);

int main() {
	collatz(10);
	return 0;
}

int collatz(int n)
{
	if (n == 1) return(1);
	if (n % 2 == 0)
		return(collatz(n / 2));
	else return(collatz(3 * n + 1));
}