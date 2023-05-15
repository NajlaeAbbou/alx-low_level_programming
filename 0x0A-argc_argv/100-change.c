#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number 
 * coins to make change for an amount of money.
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum, cnt;
	unsigned int i;
	char *t;
	int coins[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	sum = strtol(argv[1], &t, 10);
	cnt = 0;

	if (!*t)
	{
		while (sum > 1)
		{
			for (i = 0; i < sizeof(coins[i]); i++)
			{
				if (sum >= coins[i])
				{
					cnt += sum / coins[i];
					sum = sum % coins[i];
				}
			}
		}
		if (sum == 1)
			cnt++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", cnt);
	return (0);
}
