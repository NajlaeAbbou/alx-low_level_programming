#include <stdio.h>

/**
 * If you rename the program, it will print the new name, without having to compile it again
 * @argc,@argv
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
