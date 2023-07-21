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
	char *key_chars = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char key[7] = "      ";
	unsigned int i;
	size_t len, add, b;
	char max_char;

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}

	len = strlen(argv[1]);

	key[0] = key_chars[(len ^ 59) & 63];

	for (i = 0, add = 0; i < len; i++)
		add += argv[1][i];
	key[1] = key_chars[(add ^ 79) & 63];

	for (i = 0, b = 1; i < len; i++)
		b *= argv[1][i];
	key[2] = key_chars[(b ^ 85) & 63];

	max_char = argv[1][0];
	for (i = 1; i < len; i++)
	{
		if (argv[1][i] > max_char)
			max_char = argv[1][i];
	}
	key[3] = key_chars[(max_char ^ 59) & 63];

	srand(argv[1][0] ^ 14);
	key[4] = key_chars[rand() & 63];

	for (i = 0, b = 0; i < len; i++)
		b += argv[1][i] * argv[1][i];
	key[5] = key_chars[(b ^ 239) & 63];

	for (i = 1, b = 0; i < len; i++)
		b += argv[1][i] ^ argv[1][i - 1];
	key[6] = key_chars[(b ^ 229) & 63];

	printf("%s\n", key);
	return (0);
}

