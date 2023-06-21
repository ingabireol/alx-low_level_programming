#include "main.h"

/**
 * print_times_table - prints n time table
 * @n: number of times table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j;

	if (n  > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
			}
			else if ((i * j) < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar((j * i) + '0');
				if (j == n)
					continue;
				_putchar(',');
			}
			else if ((i * j) >= 10 && (i * j) < 100)
			{
				if (j == 0)
				{
					_putchar('0');
					_putchar(',');
				}
				_putchar(' ');
				_putchar(' ');
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
				if (j == n)
					continue;
				_putchar(',');
			}
			else if ((i * j) >= 100)
			{
				if (j == 0)
				{
					_putchar('0');
					_putchar(',');
				}
				_putchar(' ');
				_putchar(((i * j) / 100) + '0');
				_putchar((((i * j) / 10) % 10) + '0');
				_putchar(((i * j) % 10) + '0');
				if (j == n)
					continue;
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
