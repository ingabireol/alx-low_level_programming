#include "main.h"

/**
 * print_triangle - prints a sized triangle
 * @size: Size of the trianle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size == 0)
	{
		_putchar('\n');
	}
	for (i = 0; i <= size - 1; i++)
	{
		for (j = size - 1; j >= 0; j--)
		{
			if (j > i)
			{
				_putchar(' ');
			}
			else
				_putchar('#');

		}
		_putchar('\n');
	}
}
