#include "lists.h"

/**
 * _strlen - returns the length of a string.
 * @s: string whose length is to be found.
 *
 * Return: length of the string.
 */

int _strlen(char *s)
{
        int len = 0;

        while (s[len] != '\0')
                len++;

        return (len);
}
