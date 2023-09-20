#include "main.h"

/**
 * _strcat - concantenates 2 strings
 * @dest: 1st parameter
 * @src: 2nd parameter
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int srccount = 0;
	int destcount = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destcount++;
	for (i = 0; src[i] != '\0'; i++)
		srccount++;
	for (i = 0; i <= srccount; i++)
		dest[destcount + i] = src[i];
	return (dest);

}
