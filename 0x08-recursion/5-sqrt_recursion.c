#include "main.h"

int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: input number
 *
 * Return: natural square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - recursively finds the natural square root of a number
 * @n: input number
 * @i: current guess for the square root of n
 *
 * Return: natural square root of n, or -1 if n does not have a natural square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}

