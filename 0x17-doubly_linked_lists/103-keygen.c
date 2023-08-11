#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	char key[7] = "      ";
	size_t len;
	char max_char;
	size_t i;
	int random_seed = 0;

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}

	len = strlen(argv[1]);

	key[0] = 'A' + (len ^ 59) % 26;
	key[1] = 'A' + (len ^ 79) % 26;
	key[2] = 'A' + (len ^ 85) % 26;

	max_char = argv[1][0];
	for (i = 1; i < len; i++)
	{
		if (argv[1][i] > max_char)
		{
			max_char = argv[1][i];
		}
	}
	key[3] = 'A' + (max_char ^ 59) % 26;

	key[4] = 'A' + ((len * len) ^ 239) % 26;

	for (i = 0; i < len; i++)
	{
		random_seed += argv[1][i];
	}
	srand(random_seed);
	key[5] = 'A' + rand() % 26;

	printf("%s\n", key);
	return (0);
}

