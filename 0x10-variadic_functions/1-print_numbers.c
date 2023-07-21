#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a line.
 * @separator: separator.
 * @n: numbers of the numbers.
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	unsigned int i;

	va_start(number, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(number, int));
		else if (i == n - 1)
		{
			printf("%d", va_arg(number, int));
			continue;
		}
			printf("%d%s", va_arg(number, int), separator);
	}
	putchar('\n');
	va_end(number);
}
