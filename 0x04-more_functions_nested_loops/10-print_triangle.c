#include "main.h"

/**
 * print_triangle - prints a triangle of size n
 * @size: size of the triangle to print
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, col, space;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
		{
			_putchar(' ');
		}

		for (col = 1; col <= row; col++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
