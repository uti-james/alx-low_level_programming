#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to allocated memory containing concatenated string or NULL
 *         if memory allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
	char *result;

	/* Handle NULL strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate length of s1 */
	while (s1[len1] != '\0')
		len1++;

	/* Calculate length of s2 */
	while (s2[len2] != '\0')
		len2++;

	/* Limit n to length of s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for concatenated string */
	result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
		return NULL;

	/* Copy s1 into result */
	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	/* Concatenate n bytes of s2 into result */
	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	/* Add null terminator to result */
	result[i + j] = '\0';

	return result;
}
