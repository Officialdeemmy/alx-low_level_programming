#include "main.h"

/**
 * sqrt_shelper - root
 * @n: para
 * @i: parameter
 * Return: 0
 */
int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - returns natural square root of number
 * @n: the number
 * Return: -1 or 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - to confirm square tooy
 * @n: the helper
 * @i: to grieve
 * Return:  integer
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}
