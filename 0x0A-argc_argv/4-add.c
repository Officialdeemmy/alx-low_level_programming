#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: arg count
 * @argv: vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, j;
	int add = 0;

	if (argc == 1)
		printf("%d\n", 0);

	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			add = add + atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
