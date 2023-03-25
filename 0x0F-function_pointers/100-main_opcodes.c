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
	char *main_ptr = (char *)main; // get the pointer to the beginning of main function

	if (argc != 2) // check if correct number of arguments is passed
	{
		printf("Error\n"); // print error message
		return 1; // return 1 to indicate error
	}

	bytes = atoi(argv[1]); // convert the argument to integer

	if (bytes < 0) // check if number of bytes is negative
	{
		printf("Error\n"); // print error message
		return 2; // return 2 to indicate error
	}

	for (i = 0; i < bytes - 1; i++) // loop through the opcodes
	{
		printf("%02hhx ", *(main_ptr + i)); // print the opcode in hexadecimal format
	}
	printf("%02hhx\n", *(main_ptr + i)); // print the last opcode and newline

	return 0; // return 0 to indicate success
}
