#include "main.h"

/**
 * array_range - create array of integers
 * @min: min no in array
 * @max: max no in array
 * Return: pointer to new allocated memory
 */

int *array_range(int min, int max)
{
	int i;
	int size = max - min + 1;
	int *output;

	if (min > max)
		return (NULL);

	output = malloc(sizeof(int) * size);
	if (output == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		output[i] = min++;
	return (output);
}
