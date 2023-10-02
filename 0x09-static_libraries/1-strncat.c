#include "main.h"

/**
 * _strncat - concantenates 2 strings
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		count++;
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[count + i] = *src;
		src++;
	}
	dest[count + i] = '\0';
	return (dest);
}
