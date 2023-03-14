#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a specific char
 *
 * @size: The size of the array
 * @c: The character used to initialize the array
 *
 * Return: A pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c){
	char *ptrA;
	unsigned int count;

	if (size == 0)
	{
		return NULL;
	}

	ptrA = malloc(size * sizeof(char));
	if (ptrA == NULL)
	{
		return NULL;
	} else
	{
	for (count = 0; count < size; count++)
		ptrA[count] = c;
	}

	return(ptrA);
}
