#include "main.h"

/**
 * print_triangle - print triangle with#
 * @size: parameter
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if  (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
				_putchar(' ');
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
