#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to reverse
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - calculates the length of the string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
