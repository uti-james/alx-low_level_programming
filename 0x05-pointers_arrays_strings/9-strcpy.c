#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src,
 *           including the terminating null byte (\0),
 *           to the buffer pointed to by dest
 *
 * @dest: buffer to copy string into
 * @src: string to copy
 *
 * Return: pointer to destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

