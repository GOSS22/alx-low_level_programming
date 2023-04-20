#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @n: is the number of strings passed to the function
 * @separator: is the string to be printed between the strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *str;
	va_list strings;

	va_start(strings, n);
	if (separator == NULL)
		separator = "";
	for (a = 0; a < n; a++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
