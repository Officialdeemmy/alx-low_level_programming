#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first input number to flip
 * @m: second number to flip
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned long int len;

	for (len = 0; res > 0;)
	{
		if ((res & 1) == 1)
			len++;
		res = res >> 1;
	}
	return (len);
}
