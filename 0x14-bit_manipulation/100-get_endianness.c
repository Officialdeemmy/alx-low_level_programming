#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	int n = 1, lit_big;

	lit_big = (int) (((char *)&n)[0]);
	return (lit_big);
}
