#include "main.h"

/**
 * times_table - prints nine time table starting withn 0
 *
 * Return: void
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
				continue;
			}
			if ((i * j) < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((i * j) + '0');
				if (j == 9)
				{
					continue;
				}
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
