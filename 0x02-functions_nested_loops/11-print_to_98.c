#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints the number till 98
 * @n: number to start from
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("98");
	}
	else
		printf("98");
	printf("\n");

}
