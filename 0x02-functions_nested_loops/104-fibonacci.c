#include <stdio.h>

/**
 * main - print fibbonacci
 * Return: always 0
 */

int main(void)
{
	unsigned int long num1 = 1, num2 = 2, next, i;

	printf("%lu, ", num1);
	for (i = 1; i < 98; i++)
	{
		printf("%lu", num2);
		next = num1 + num2;
		num1 = num2;
		num2 = next;
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
