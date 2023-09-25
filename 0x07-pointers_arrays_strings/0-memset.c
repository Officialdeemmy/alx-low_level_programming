#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: the pointer
 * @b: the valoue
 * @n: number of value
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
