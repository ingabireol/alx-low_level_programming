#include "main.h"

/**
 * print_last_digit - prints the last digit of anumebr
 *
 * Return: the last digit of the number
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	_putchar((n%10) + '0');
	return (n%10);
}
