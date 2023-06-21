#include "main.h"

/**
 * print_less10 - Handles numbers less than 10 in the time table.
 * @i: first number.
 * @j: second number.
 *
 * Return: void
 */
void print_less10(int i, int j)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar((j * i) + '0');

}
/**
 * print_great100 - Handles number greater 100 in the time table.
 * @i: num1.
 * @j: num2.
 *
 * Return: void
 */
void print_great100(int i, int j)
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
}
/**
 * print_less100 - Handles number with product > 999 in the table.
 * @i: num1.
 * @j: num2.
 *
 * Return: void
 */
void print_less100(int i, int j)
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

}
/**
 * print_times_table - prints n time table
 * @n: number of times table
 *
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
	else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				_putchar('0');
			}
			else if ((i * j) < 10)
			{
				print_less10(i, j);
			}
			else if ((i * j) >= 10 && (i * j) < 100)
			{
				print_less100(i, j);
			}
			else if ((i * j) >= 100)
			{
				print_great100(i, j);
			}
			if (j == n)
				continue;
			 _putchar(',');
		}
		_putchar('\n');
	}
}
