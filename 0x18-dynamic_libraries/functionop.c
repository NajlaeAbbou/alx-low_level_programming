
/**
* add - adds two int
* @a: int
* @b: int
* Return: sum
*/
int add(int a, int b)
{
	return (a + b);
}

/**
* sub - subtracts two int
* @a: int
* @b: int
* Return: subtract
*/
int sub(int a, int b)
{
	return (a - b);
}

/**
* mul - multiplies two int
* @a: int
* @b: int
* Return: multiple
*/
int mul(int a, int b)
{
	return (a * b);
}

/**
* div - divideds two int
* @a: int
* @b: int
* Return: dividend
*/
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}

/**
 * mod - finds the modulus of two int
 * @a: int
 * @b: int
 * Return: modulus
*/
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0);
}
