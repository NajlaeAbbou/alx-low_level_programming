#include<stdio.h>

/**
 * firstfun - a function that prints You're beat! and yet,
 * you must allow,\nI bore my house upon my back!\n before
 * the main function is executed.
 */
void firstfun(void) __attribute__ ((constructor));

void firstfun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
