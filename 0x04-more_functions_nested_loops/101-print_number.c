#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
	int digit, reversed = 0, num_digits = 0;

	if (n < 0) {
		_putchar('-');
		n = -n;
	}

	/* calculate number of digits */
	do {
		num_digits++;
		digit = n % 10;
		reversed = reversed * 10 + digit;
		n /= 10;
	} while (n > 0);

	/* print digits in reversed order */
	while (num_digits > 0) {
		digit = reversed % 10;
		_putchar(digit + '0');
		reversed /= 10;
		num_digits--;
	}
}
