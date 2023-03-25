#include "main.h"
#include <stdlib.h>

#include "main.h"

/**
 * main - entry point
 * @argc: the number of command-line arguments
 * @argv: an array containing the command-line arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    int i, j, len1, len2, res_len, carry, n1, n2, *res;

    if (argc != 3)
    {
        _puts("Error");
        exit(98);
    }
    len1 = _strlen(argv[1]);
    len2 = _strlen(argv[2]);
    for (i = 0; i < len1; i++)
    {
        if (!_isdigit(argv[1][i]))
        {
            _puts("Error");
            exit(98);
        }
    }
    for (i = 0; i < len2; i++)
    {
        if (!_isdigit(argv[2][i]))
        {
            _puts("Error");
            exit(98);
        }
    }
    res_len = len1 + len2;
    res = _calloc(res_len, sizeof(int));
    if (!res)
    {
        _puts("Error");
        exit(98);
    }
    for (i = len1 - 1; i >= 0; i--)
    {
        n1 = argv[1][i] - '0';
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = argv[2][j] - '0';
            res[i + j + 1] += n1 * n2 + carry;
            carry = res[i + j + 1] / 10;
            res[i + j + 1] %= 10;
        }
        res[i + j + 1] += carry;
    }
    i = 0;
    while (i < res_len - 1 && res[i] == 0)
        i++;
    for (; i < res_len; i++)
        _putchar(res[i] + '0');
    _putchar('\n');
    free(res);
    return (0);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
    int len;

    for (len = 0; s[len]; len++)
        ;
    return (len);
}

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of elements in the array
 * @size: the size of each element
 *
 * Return: a pointer to the allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *ptr;
    unsigned int i;

    if (nmemb == 0 || size == 0)
        return (NULL);
    ptr = malloc(nmemb * size);
    if (!ptr)
        return (NULL);
    for (i = 0; i < nmemb * size; i++)
        ptr[i] = 0;
    return (ptr);
}

/**
 * _puts - writes a string to stdout
 * @str: the string to write
 *
 * Return: nothing
 */
void _puts(char *str)
{
    int i;

    for (i = 0; str[i]; i++)
        _putchar(str[i]);
}
