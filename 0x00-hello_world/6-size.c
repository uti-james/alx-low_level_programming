#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n"
		"Size of an int: %lu byte(s)\n"
		"Size of a long int: %lu byte(s)\n"
		"Size of a long long int: %lu byte(s)\n"
		"Size of a float: %lu byte(s)\n",
		(unsigned long)sizeof(char),
		(unsigned long)sizeof(int),
		(unsigned long)sizeof(long int),
		(unsigned long)sizeof(long long int),
		(unsigned long)sizeof(float));
	return (0)
}
