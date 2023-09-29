#include "main.h"

int _count(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _count(s + 1));
}

/**
 */

int _check (char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (1 >= len)
		return (1);
	return (_check(s, i + 1, len - 1));
}

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_check(s, 0, _count(s))); 
}
