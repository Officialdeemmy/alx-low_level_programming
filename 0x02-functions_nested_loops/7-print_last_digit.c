#include "main.h"

/**
 * print_last_digit - print the last digit
 * @i: parameter function
 * Return: returns j
 */

int print_last_digit(int i)
{
	int j = i % 10;

	if (i < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
