#include <stdio.h>

/**
 * main - Print the sum of even Fibonacci numbers up to a fib value
 * not exceeding 4,000,000.
 * Return: 0
 */
int main(void)
{
	int i = 1, j, sum = 0, k;

	for (j = 2; j < 4000000;)
	{
		if (j % 2 == 0)
			sum += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", sum);
	return (0);
}
