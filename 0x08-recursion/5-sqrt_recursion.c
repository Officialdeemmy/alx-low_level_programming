#include "main.h"

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
	return (sqrt_helper(n, 1));
}
/**
 * sqrt_helper - to confirm square tooy
 * @n: the helper
 * @i: to grieve
 * Retun  integer
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_helper(n, i + 1));
}
