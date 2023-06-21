#include "main.h"

/**
 * print_sign - prints + if n is greater than zero,
 * - if n is less than 0,
 *   and 0 is n is zero
 *   @n: integer to check
 *   Return: 1 if positive -1 if neg and 0 is zero
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
