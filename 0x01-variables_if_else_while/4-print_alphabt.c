#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q;

	for (q = 'a'; q <= 'z'; q++)
	{
		if (!((q == 'e') || (q == 'q')))
		{
			putchar(q);
		}
	}
	putchar('\n');
	return (0);
}
