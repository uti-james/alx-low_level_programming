#include "main.h"
#include <stdlib.h>

/*
 * _strdup - creates a new string duplicate of the input string
 *
 * @str: the input string to duplicate
 *
 * This function takes a string as input, and creates a new duplicate string in
 * memory. The new string is an exact copy of the input string, and can be
 * modified independently of the original.
 *
 * Returns: a pointer to the new string, or NULL if an error occurred
 */

char *_strdup(char *str)
{
	char *arr;
	int i, str_len = 0;

	if (str == NULL)
		return (NULL);

	while (str[str_len] != '\0')
	{
		str_len++;
	}

	arr = malloc((str_len * sizeof(char)) + 1);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';

	return (arr);
}
