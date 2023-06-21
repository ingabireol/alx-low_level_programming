#include "main.h"
#include <stdio.h>
/**
 * print_natural - prints multiples between 0 and 1024
 *
 * Return: void
 */

void print_natural(void)
{
	int i, j;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			j += i;
		}
	}
	printf("%d\n", j);
}
