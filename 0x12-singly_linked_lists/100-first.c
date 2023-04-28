#include <stdio.h>
void main1(void) __attribute__ ((constructor));
/**
 * main1 - prints a set of statements before
 * the main function is executed.
 */
void main1(void)
{
	printf("You're beat! and yet, you must allow,\n");

	printf("I bore my house upon my back!\n");
}
