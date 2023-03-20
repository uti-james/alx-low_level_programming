#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers from min (included) to max
 * (included), ordered from min to max.
 * @min: the minimum integer to include in the array
 * @max: the maximum integer to include in the array
 *
 * Return: pointer to the newly created array, or NULL on failure
 */

int *array_range(int min, int max)
{
	int *arr, i;
	int arr_size = (max - min) + 1;

	if (min >= max)
	{
		return (NULL);
	}

	arr = malloc(arr_size * sizeof(int));

	if (!arr)
	{
		return (NULL);
	}

	for (i = 0; i < arr_size; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
