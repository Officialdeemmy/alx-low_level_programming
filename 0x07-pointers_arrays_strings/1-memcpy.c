#include "main.h"

/**
 * simple_print_buffer - copies memory area
 * @dest: destination
 * @src: source
 * @n: n bystes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
