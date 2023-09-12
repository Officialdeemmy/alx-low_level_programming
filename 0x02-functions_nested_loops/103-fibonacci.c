#include <stdio.h>

/**
 * main - sum of even fibbonacci
 * Return: always 0
 */

int main(void)
{
	int limit = 4000000, num1 = 1, num2 = 2, next, sum = 2, i;

	while (next <= limit)
	{
		next = num1 + num2;
		if (next % 2 == 0)
			sum = sum + next;
		num1 = num2;
		num2 = next;
	}
	printf("%d\n", sum);
	return (0);
}
