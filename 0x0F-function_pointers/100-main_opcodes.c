#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 if successful, 1 if incorrect number of 
 * arguments, 2 if negative number of bytes
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *main_ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < bytes - 1; i++)
	{
		printf("%02hhx ", *(main_ptr + i));
	}
	printf("%02hhx\n", *(main_ptr + i));

	return 0;
}
