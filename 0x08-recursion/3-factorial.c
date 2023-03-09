/**
 * factorial - returns the factorial of a given number
 * @n: the number to find the factorial of
 *
 * Return: the factorial of n
 *         -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0) /* base case: invalid input */
		return (-1);
	else if (n == 0) /* base case: factorial of 0 is 1 */
		return (1);
	else /* recursive case: multiply n by the factorial of n-1 */
		return (n * factorial(n - 1));
}

