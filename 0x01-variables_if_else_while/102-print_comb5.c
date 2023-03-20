#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;
	int m, n, o, p;

	for (num1 = 0; num1 < 100; num1++)
	{
		m = num1 / 10;
		n = num1 % 10;

		for (num2 = 0; num2 < 100; num2++)
		{
			o = num2 / 10;
			p = num2 % 10;

			if ((m < o) || (m == o && n < p))
			{
				putchar('0' + m);
				putchar('0' + n);
				putchar(' ');
				putchar('0' + o);
				putchar('0' + p);

				if ((m != 9) || (n != 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
