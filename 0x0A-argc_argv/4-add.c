#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a, b, sum = 0;
	char *mark;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; argv[a]; a++)
	{
		b = strtol(argv[a], &mark, 10);
		if (*mark)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += b;
		}
	}
	printf("%d\n", sum);

	return (0);
}
