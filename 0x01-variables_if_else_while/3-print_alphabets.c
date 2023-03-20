#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q;
	int r;

	for (q = 'a'; q <= 'z'; q++)
	{
		putchar(q);
	}
	for (r = 'A'; r <= 'Z'; r++)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
