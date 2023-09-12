#include <stdio.h>

/**
 * main - function to print fibonnacci numbers
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long int num1 = 1, num2 = 2, next, i;

	printf("%lu, ", num1);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", num2);
		next = num1 + num2;
		num1 = num2;
		num2 = next;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
