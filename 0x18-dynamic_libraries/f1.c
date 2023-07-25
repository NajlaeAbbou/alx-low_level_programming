#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: char
 * Return: 1 Or -1 with errno
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks lowercase char
 * @c: char
 * Return: 1 or 0
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - checks alphabetic char
 * @c: char
 * Return: 1 Or 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _abs - computes the absolute value
 * @n: int
 * Return: the absolute n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}

/**
 * _isupper - checks uppercase char
 * @c: char
 * Return: 1 or 0
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
