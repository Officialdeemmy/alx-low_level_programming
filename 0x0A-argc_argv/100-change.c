#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum chane
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
		printf("%d\n", 0);
	else
	{
		while (cents > 0)
		{
			if (cents >= 25)
				cents = cents - 25;
			else if (cents >= 10)
				cents = cents - 10;
			else if (cents >= 5)
				cents = cents - 5;
			else if (cents >= 2)
				cents = cents - 2;
			else if (cents >= 1)
				cents = cents - 1;
			coins++;
		}
		printf("%d\n", coins);
	}
	return (0);
}
