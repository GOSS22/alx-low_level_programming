#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int idx, j = 0;
	unsigned long int current;

	for (idx = 63; idx >= 0; idx--)
	{
		current = n >> idx;

		if (current & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
