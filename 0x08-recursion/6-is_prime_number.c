#include "main.h"

int is_prime_helper(int n, int i);

/**
 * is_prime_number - checks if an input integer is a prime number
 * @n: input integer
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime_helper(n, n - 1));
}

/**
 * is_prime_helper - recursively checks if an input integer is a prime number
 * @n: input integer
 * @i: current guess for a factor of n
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i - 1));
}

