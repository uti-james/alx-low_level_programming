#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 * Return: 1 if the character is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - gets the length of a string
 * @s: the string to get the length of
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * print_error - prints an error message and exits with a status of 98
 */
void print_error(void)
{
	char *error_msg = "Error\n";

	while (*error_msg)
		_putchar(*(error_msg++));

	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int i, j, num1_len, num2_len, result_len;
	char *num1, *num2, *result;

	if (argc != 3)
		print_error();

	num1 = argv[1];
	num2 = argv[2];
	num1_len = _strlen(num1);
	num2_len = _strlen(num2);

	for (i = 0; i < num1_len; i++)
	{
		if (!_isdigit(num1[i]))
			print_error();
	}

	for (j = 0; j < num2_len; j++)
	{
		if (!_isdigit(num2[j]))
			print_error();
	}

	result_len = num1_len + num2_len;
	result = malloc(result_len * sizeof(char));
	if (!result)
		return (1);

	for (i = 0; i < result_len; i++)
		result[i] = '0';

	for (i = num1_len - 1; i >= 0; i--)
	{
		for (j = num2_len - 1; j >= 0; j--)
		{
			int mul = (num1[i] - '0') * (num2[j] - '0');
			int p1 = i + j;
			int p2 = i + j + 1;
			int sum = mul + (result[p2] - '0');

			result[p1] += sum / 10;
			result[p2] = (sum % 10) + '0';
		}
	}

	i = 0;
	while (result[i] == '0' && i < result_len - 1)
		i++;

	while (i < result_len)
		_putchar(result[i++]);

	_putchar('\n');

	free(result);

	return (0);
}
