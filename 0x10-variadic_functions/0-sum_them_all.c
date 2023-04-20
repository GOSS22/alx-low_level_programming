#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum
 * of all its parameters.
 * @n: Count
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int a, sum = 0;
	va_list ap;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
