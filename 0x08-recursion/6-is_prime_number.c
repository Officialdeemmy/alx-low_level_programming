#include "main.h"

/**
 * prime_helper - calculates if it is prime
 * @n: bynver to check
 * @i: iterator
 * Return: 0 or 1
 */

int prime_helper(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	return (prime_helper(n, i - 1));
}

/**
 * is_prime_number - calculate prime
 * @n: number
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, n - 1));
}
