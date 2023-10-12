#include "function_pointers.h"

/**
 * array_iterator - executes function on each element of array
 * @array: array
 * @size: size of the array
 * @action: function to perform on each array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
