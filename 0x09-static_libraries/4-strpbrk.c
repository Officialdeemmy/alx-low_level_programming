#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches string
 * @s: string to search from
 * @accept: string to search
 * Return: accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
