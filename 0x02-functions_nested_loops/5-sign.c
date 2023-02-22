#include "main.h"

/**
 * print_sign - prints sign of the number n
 * @n character to check
 * Returns: 1 if positve, 0 if negative and -1 less than zero
 */

int print_sign(int n)
{
	if(n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if(n == 0)
	{
		_putchar('0');
		return (0);
	} else
	{
		_putchar('-');
		return (-1);
	}
}
