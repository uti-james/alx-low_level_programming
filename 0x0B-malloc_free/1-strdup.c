#include "main.h"
#include <stdlib.h>

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
