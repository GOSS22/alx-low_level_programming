#include "main.h"
/**
 * factorial - finds the factorial of a given number
 * @n: The given number
 * Return: The resulting factorial,
 * -1 If n is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
