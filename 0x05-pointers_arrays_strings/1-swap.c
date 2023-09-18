#include "main.h"

/**
 * swap_int - swap variables
 * @a: 1st parameter
 * @b: 2nd parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
