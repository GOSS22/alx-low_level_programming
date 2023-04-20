#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed
 * by a new line.
 * @separator: is the string to be printed
 * between numbers
 * @n: is the number of integers passed to the
 * function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(ap, int));
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
