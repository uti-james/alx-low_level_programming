#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n = 612852475143;
	long int i;

	for (i = 2; i <= n; i++)
	{
		while (n % i == 0 && n != i)
		{
			n /= i;
		}
	}

	printf("%ld\n", n);

	return (0);
}
