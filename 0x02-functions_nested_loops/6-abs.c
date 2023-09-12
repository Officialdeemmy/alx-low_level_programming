#include "main.h"

/**
 * _abs - fuction name
 * @i: function parameter
 * Return: -a or a
 */

int _abs(int i)
{
	if (i < 0)
		return (-i);
	else if (i >= 0)
		return (i);

	return (0);
}
