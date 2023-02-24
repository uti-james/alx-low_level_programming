#include "main.h"

/**
 * print_numbers - function that prints the numbers 0 - 9
 */
void print_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		_putchar(x + '0');
		x++;
	}

	_putchar('\n');
}
