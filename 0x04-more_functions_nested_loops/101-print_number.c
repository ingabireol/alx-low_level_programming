#include "main.h"

/**
 * print_number - prints anumber
 * @n: numbner to rpint
 * Return: void
 */

void print_number(int n)
{
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	i = rev_number(n);
	while (i != 0)
	{
		_putchar((i % 10) + '0');
		i = i / 10;
	}
}

/**
 * rev_number - reverses a number
 * @num: number tobe reversed
 * Return: reversed  number
 */

int rev_number(int num)
{
	int i = 0, ld;

	while (num != 0)
	{
		ld = num % 10;
		i = i * 10 + ld;
		num = num / 10;
	}
	return (i);
}
