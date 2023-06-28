#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
	{
		for (j = (i - 1) / 2; j < 0; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');

}
