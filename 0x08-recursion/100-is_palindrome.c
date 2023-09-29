#include "main.h"

/**
 * _count - returns length of string
 * @s: string to calculate
 * Return: length of string
 */

int _count(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _count(s + 1));
}

/**
 * _check - check character for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of string
 * Return: 1 or 0 if not palindrome
 */

int _check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (_check(s, i + 1, len - 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to reverse
 * Return: 1 if it is 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_check(s, 0, _count(s)));
}
