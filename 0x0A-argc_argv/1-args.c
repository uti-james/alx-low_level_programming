#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: the number of arguments passed to the program
 * @argv: an array containing the program command line arguments
 *
 * Return: Always 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
