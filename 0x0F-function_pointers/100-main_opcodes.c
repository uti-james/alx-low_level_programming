#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments passed to the program
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect, or 2 if the
 * number of bytes is negative.
 */
int main(int argc, char *argv[])
{
	int bytes, i;

	/* Check if the number of arguments is correct */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the argument to an integer */
	bytes = atoi(argv[1]);

	/* Check if the number of bytes is negative */
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	/* Print the opcodes of the main function */
	for (i = 0; i < bytes; i++)
	{
		printf("%02x ", ((unsigned char *)main)[i]);
	}
	printf("\n");

	return (0);
}
