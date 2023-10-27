#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:  pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int base = 2;
	unsigned int count = 0;
	unsigned int add = 0, power = 1, n, a;

	if (b == NULL)
		return (0);

	for (count = 0; b[count] != '\0'; count++)
		;
	if (count == 1 && (b[0] == '0' || b[0] == '1'))
		return (b[0] - 48);

	for (n = 0; b[n] != '\0'; n++)
	{
		if (b[n] !=  '0' && b[n] != '1')
			return (0);
		for (a = count - 1; a > 0; a--)
		power = power * base;
		add = add + (power * (b[n] - 48));
		count--;
		power = 1;
	}
	return (add);
}
