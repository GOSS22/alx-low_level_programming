#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int v;

	for (v = 'z'; v >= 'a'; v--)
	{
		putchar(v);
	}
	putchar('\n');
	return (0);
}
