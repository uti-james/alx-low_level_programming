#include "main.h"

/**
 * _strlen_recursion - returns the length of a string using recursion
 * @s: pointer to the string to measure the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0') /* base case */
        return 0;
    else /* recursive case */
        return 1 + _strlen_recursion(s + 1);
}
