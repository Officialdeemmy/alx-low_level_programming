#include "main.h"

/**
 *  clear_bit - function that sets the value of a bit to 0 at a given index
 *  @n: number input
 *  @index: the index, starting from 0 of the bit you want to set
 *  Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int cover = 1;

	cover = cover << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n) >> index & 1) == 1)
		*n = cover ^ *n;

	return (1);
}
