#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: the string to duplicate
 *
 * Return: a pointer to the newly allocated space in memory
 * containing a copy of the string, or NULL if str is NULL or
 * if insufficient memory was available.
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
