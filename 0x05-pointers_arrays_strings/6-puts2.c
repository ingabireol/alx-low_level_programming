#include "main.h"

/**
 * puts2 - prints other charcter of a string
 * @str: string to take
 * Return: void
 */

void puts2(char *str)
{
	int i = 1;

	_putchar(str[0]);
	while (str[i] != 0)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');

}
