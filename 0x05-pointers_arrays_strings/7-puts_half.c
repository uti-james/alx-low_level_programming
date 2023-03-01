#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of a string
 * @str: input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len - 1) / 2 + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

