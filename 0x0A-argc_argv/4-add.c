#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */

int main(int argc, char *argv[]) {
	int sum = 0;
	int i, j;

	if (argc == 1) {
		printf("0\n");
		return 0;
	}

	for (i = 1; i < argc; i++) 
	{
		for (j = 0; argv[i][j] != '\0'; j++) 
		{
			if (argv[i][j] < '0' || argv[i][j] > '9') 
			{
				printf("Error\n");
				return 1;
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return 0;
}
